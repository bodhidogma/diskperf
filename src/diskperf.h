/*
 *   @File      diskperf.h
 * Author:      Paul McAvoy <paulmcav@queda.net>
 *              
 * $Id: diskperf.h,v 1.1 2003-12-16 21:14:11 paulmcav Exp $
*/

#ifndef _DISKPERF_H_
#define _DISKPERF_H_

#include <gtk/gtk.h>

int   db_main( GtkWidget * );
float dp_get_filesyssize( GtkLabel *m, char *dev );
int   dp_do_exec( GtkWidget *m );

#define MP_SIZE	256
#define MP_DELM	"@"

extern char mount_point[ MP_SIZE ];

extern int  iRunning;
extern int  s_FileSize;
extern int  s_DelPat;
extern int  s_WrtPat;

#endif


