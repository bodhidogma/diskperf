/*
 *   @File      diskperf.c
 * Author:      Paul McAvoy <paulmcav@queda.net>
 * 
 * $Id: diskperf.c,v 1.2 2003-12-18 23:56:02 paulmcav Exp $
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>
#include <string.h>

#include <sys/vfs.h>

#include "diskperf.h"

int pdp_get_filesys( GtkWidget *m, const char *dev );
int pdp_write_file( const char *path, int num, int KBsize );

const char default_device[] = { "sdmmc" };

char mount_point[ MP_SIZE ];
int  iRunning = 0;

/* need to make sure these line up with the GUI options */
int  s_FileSize = 16;
int  s_DelPat   = 2;
int  s_WrtPat   = 16;
int  s_RdPat    = 2;

// ------------------------------------------------------------------

typedef struct {
	GtkProgressBar *progress;
	GtkStatusbar   *status;
	GtkLabel       *lblWrite;
	GtkLabel       *lblWrPat;
	GtkLabel       *lblRdPat;

	char  testPath[ MP_SIZE ];
	int   testCount;

} app_info;

app_info my_Data;

// ------------------------------------------------------------------

int
dp_main( GtkWidget *win )
{
	GtkWidget *w, *s, *l1, *l2, *l3;
	
	/* get widget pointers */
	s  = (GtkWidget*)lookup_widget( GTK_WIDGET(win), "stBar" );
	w  = (GtkWidget*)lookup_widget( GTK_WIDGET(win), "prgBar" );
	l1 = (GtkWidget*)lookup_widget( GTK_WIDGET(win), "lblWrite" );
	l2 = (GtkWidget*)lookup_widget( GTK_WIDGET(win), "lblWrPattern" );
	l3 = (GtkWidget*)lookup_widget( GTK_WIDGET(win), "lblRdPat" );
	
	/* store pointers to our widgets for later */
	my_Data.progress = (GtkProgressBar*)w;
	my_Data.status   = (GtkStatusbar*)s;
	my_Data.lblWrite = (GtkLabel*)l1;
	my_Data.lblWrPat = (GtkLabel*)l2;
	my_Data.lblRdPat = (GtkLabel*)l3;
	
	/* set initial states */
	gtk_statusbar_push( my_Data.status, (guint)NULL, "Loading" );
	gtk_progress_bar_update( my_Data.progress,  0 );

	/* load combo box list  */
	w = (GtkWidget*)lookup_widget( GTK_WIDGET(win), "cmbPath" );
	pdp_get_filesys( w, "/dev" );
	
	gtk_statusbar_pop( my_Data.status, (guint)NULL );
	
	return 0;
}

int
pdp_get_filesys( GtkWidget *m, const char *devname )
{
	GtkWidget *pTxt;
	GList *items = NULL;
	FILE *fp;

	char mi[16][32] = { '\0' };
	char pth[256] = { '\0' };
	char *dev;
	char *mnt;
	char def_path[256];
	char *def = NULL;
	int  i;

	if ( (fp = fopen("/proc/mounts", "r")) == NULL ) {
		return 0;
	}
	
	i = 0;
	while ( fgets(pth, 255, fp) ) {
		if ( strncmp(pth, devname, strlen(devname)) == 0 ) {
			dev = (char*)strtok(pth, " ");
			mnt = (char*)strtok(NULL, " ");

			sprintf( mi[i++], "%s %s %s\0", dev, MP_DELM, mnt );
			items = g_list_append (items, mi[i-1]);
			
			/* try and find a default device */
			if ( def == NULL
					&& ( def = strstr( dev, default_device ) )
			   ) {
				strcpy( def_path, mi[i-1] );
			}
		}
	}
	fclose( fp );
	
	gtk_combo_set_popdown_strings (GTK_COMBO (m), items);
  
	/* try to make a default selection */
	if ( def ) {
		pTxt = (GtkWidget*)lookup_widget( GTK_WIDGET(m), "cmbPathTxt" );
		gtk_entry_set_text( (GtkEntry*)pTxt, def_path );
	}
	
	return 0;
}

float
dp_get_filesyssize( GtkLabel *m, char *dev )
{
	char buf[128];
	char path[32], *ptr;
	struct statfs fs;
	float dfree;

	strcpy( mount_point, dev );
	strcpy( path, dev );
	strtok( path, MP_DELM );
	ptr = strtok( NULL, " " );

	// statfs
	if ( statfs( ptr, &fs ) ) {
		printf( "statfs errro\n");
		return 1;
	}

	sprintf(buf, "Size: %6.1f MB\nFree: %6.1f MB",
			1.0 * fs.f_blocks / 1024 / 1000 * fs.f_bsize,
		   	1.0 * fs.f_bfree / 1024 / 1000 * fs.f_bsize );
	
	gtk_label_set_label( m, buf );
	
	dfree = (1.0 * fs.f_bfree / fs.f_blocks);
	gtk_progress_bar_update( my_Data.progress, 1.0 - dfree );

	return dfree;
}

/* initial file write */
int
pdp_test1( void )
{
	return 0;
}

/* delete step */
int
pdp_test2( void )
{
	return 0;
}

/* write pattern */
int
pdp_test3( void )
{
	return 0;
}

/* read pattern */
int
pdp_test4( void )
{
	return 0;
}

/* entry point to start testing */
int
dp_do_exec( GtkWidget *win )
{
	GtkWidget *w;
	GtkLabel  *l_info;

	int   x;
	float f_diskfree; 
	long  count[4] = { 0 };
	int   mode;
	int   ret;
	int   KBsize;
	char  path0[ MP_SIZE ];
	char  path1[ MP_SIZE ];
	char  *ptr;
	float rate;
	float maxrate;

	time_t t_start, t_end, t_diff;
	
//	printf( "fs: %d, dp: %d, wp: %d, rp: %d\n", s_FileSize, s_DelPat, s_WrtPat, s_RdPat );
	
	/* get status bar */
	gtk_statusbar_push( my_Data.status, (guint)NULL, "Working..." );
	
	/* get info label */
	l_info = (GtkLabel*)lookup_widget (GTK_WIDGET (win), "lblSize");
	
	/* find correct path and make our test dir */
	strcpy( path0, mount_point );
	strtok( path0, MP_DELM );
	ptr = strtok( NULL, " " );
	sprintf( path1, "%s/dpd-test", ptr );
	mkdir( path1, 0777L );

//	printf( "path1: %s\n", path1 );
	
	t_start = time(NULL);
	mode  = 0;
	rate  = 0;
	maxrate = -1;
	while ( iRunning ) {

		switch (mode)
		{
			/* initial write test */
			case 0:
				ret = pdp_write_file( path1, count[ mode ], s_FileSize );
				break;

			/* delete pattern */
			case 1:
//				break;

			/* write pattern */
			case 2:
//				break;

			/* read pattern */
			case 3:
//				break;

			/* last mode, exit application */
			default:
				printf( "here\n" );
				iRunning = 0;
				break;
		}
		
		/* increment counter */
		if ( !ret ) {
			count[ mode ]++;
		}
		/* switch to next step */
		else {
			mode ++;
		}

		t_end = time(NULL);
		if ( t_end != t_start ) {
			rate = count[ mode ] * s_FileSize / (1.0 * t_end-t_start);

			sprintf( path0, "%10.1f KB/s", rate );
			gtk_label_set_label( my_Data.lblWrPat, path0 );

			if ( rate > maxrate ) {
				maxrate = rate;
				sprintf( path0, "%10.1f KB/s", rate );
				gtk_label_set_label( my_Data.lblWrite, path0 );
			}
		}
		
//		if ( !(count % 1) ) {
			sprintf( path0, "Writing file #%d", count[ mode ] );
			gtk_statusbar_pop( my_Data.status, (guint)NULL );
			gtk_statusbar_push( my_Data.status, (guint)NULL, path0 );
//		}
	
		/* update display with pertinent info.. */
		f_diskfree = dp_get_filesyssize( l_info, mount_point );
		
		/* process GTK stuff */
		/* NOTE: possible change in status of iRunning here */

		while(gtk_events_pending()) { gtk_main_iteration(); }
		
	}
	
	t_end = time(NULL);
	sprintf( path0, "Wrote files: %d in %ds.", count[mode], (t_end-t_start) );
	gtk_statusbar_push( my_Data.status, (guint)NULL, path0 );
	
	return 0;
}

int
pdp_write_file( const char *path, int num, int KBsize )
{
	char name[ MP_SIZE*2 ];
	char buff[1024];
	int  fd = 0;
	int  i;
	
	sprintf( name, "%s/fill-%05d", path, num );
//	printf( "path: %s\n", name);

	if ( (fd = creat( name, (S_IRWXU|S_IRWXG|O_SYNC))) == 0 ) {
		printf( "file create failed\n" );
		return 1;
	}

	/* set our buffer to be some number */
	memset( buff, (num%128) +1, 1024 );
	
	/* write out N * 1024 bytes of data */
	for (i=0; i < KBsize; i++) {
		/* if an error, return */
		if ( write( fd, buff, 1024 ) < 1 ) {
			return 2;
		}
	}
	
	/* sync / flush file to disk immediately */
//	fsync( fd );
	sync();

	close( fd );
	return 0;
}
