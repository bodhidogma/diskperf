#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#include "diskperf.h"

#include <string.h>

void
on_rFS1_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	s_FileSize = 1;
}


void
on_rFS2_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	s_FileSize = 2;
}


void
on_rFS3_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	GtkWidget *e;
	e = lookup_widget (GTK_WIDGET (togglebutton), "eFilSize");
	gtk_widget_set_sensitive( e, togglebutton->active );
	
	s_FileSize = 3;
}


void
on_rDP1_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	s_DelPat = 1;
}

void
on_rDP2_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	s_DelPat = 2;
}


void
on_rDP3_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	s_DelPat = 3;
}


void
on_rDP4_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	GtkWidget *e;
	e = lookup_widget (GTK_WIDGET (togglebutton), "eDelPat");
	gtk_widget_set_sensitive( e, togglebutton->active );
	s_DelPat = 4;
}


void
on_rWP1_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	s_WrtPat = 1;
}


void
on_rWP2_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	s_WrtPat = 2;
}


void
on_rWP3_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	GtkWidget *e;
	e = lookup_widget (GTK_WIDGET (togglebutton), "eWrPat");
	gtk_widget_set_sensitive( e, togglebutton->active );
	s_WrtPat = 3;
}


void
on_bCancel_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *e;

	if ( ! iRunning ) {
		gtk_main_quit();
		return;
	}
	gtk_widget_set_sensitive( (GtkWidget*)button, FALSE );
	e = lookup_widget (GTK_WIDGET (button), "bExec");
	
	gtk_widget_hide( (GtkWidget*)button );
	gtk_widget_show( (GtkWidget*)e );

	gtk_widget_set_sensitive( (GtkWidget*)e, TRUE );

	iRunning = 0;
}


void
on_bExec_activate                      (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *e, *s, *fr[10];

	int  x;
	char boxNames[][32] = {
		{ "vbxFileSize" },
		{ "vbxDelete" },
		{ "vbxWrite" },
		{ "vbxInfo" },
		{ "vbxRead" },
		{ (int)NULL },
	};

	/* disable input boxes */
	for (x=0; boxNames[x][0] != (int)NULL; x++) {
		fr[x] = (GtkWidget*)lookup_widget( GTK_WIDGET(button), boxNames[x] );
		gtk_widget_set_sensitive( fr[x], FALSE );
	}

	s = lookup_widget (GTK_WIDGET (button), "bSave");
	gtk_widget_set_sensitive( (GtkWidget*)s, FALSE );
	
	e = lookup_widget (GTK_WIDGET (button), "bCancel");
	gtk_widget_set_sensitive( (GtkWidget*)button, FALSE );

	gtk_widget_hide( (GtkWidget*)button );
	gtk_widget_show( (GtkWidget*)e );
	
	/* update display / events */
	while(gtk_events_pending()) { gtk_main_iteration(); }

	iRunning = 1;
	dp_do_exec( (GtkWidget*) button );
	iRunning = 0;

	/* re-enable input boxes */
	for (x=0; boxNames[x][0] != (int)NULL; x++) {
		gtk_widget_set_sensitive( fr[x], TRUE );
	}
	
	gtk_widget_set_sensitive( (GtkWidget*)s, TRUE );
	gtk_widget_set_sensitive( (GtkWidget*)e, TRUE );
}


void
on_bSave_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{
	printf( "save\n" );
}



void
on_cmbPathTxt_changed                  (GtkEditable     *editable,
                                        gpointer         user_data)
{
	GtkLabel *l;
	char *txt;

	txt = (char*)gtk_entry_get_text( (GtkEntry*)editable );
	
	/* when the text value changes value */
	if ( strlen(txt) > 0 ) {
		l = (GtkLabel*)lookup_widget (GTK_WIDGET (editable), "lblSize");
		
		dp_get_filesyssize( l, txt );
	}
}



gboolean
on_quit                                (GtkWidget       *widget,
                                        GdkEvent        *event,
                                        gpointer         user_data)
{
	iRunning = 0;
	
	while(gtk_events_pending()) { gtk_main_iteration(); }
	gtk_main_quit();
		
	return TRUE;
}


