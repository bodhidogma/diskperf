#include <gtk/gtk.h>


void
on_bPath_pressed                       (GtkButton       *button,
                                        gpointer         user_data);

void
on_rFS3_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton10_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rDP4_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rWP3_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_bPath_clicked                       (GtkButton       *button,
                                        gpointer         user_data);

void
on_optionmenu1_changed                 (GtkOptionMenu   *optionmenu,
                                        gpointer         user_data);

void
on_bCancel_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_bExec_activate                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_bSave_clicked                       (GtkButton       *button,
                                        gpointer         user_data);

void
on_combo_entry1_activate               (GtkEntry        *entry,
                                        gpointer         user_data);

void
on_cmbPath_activate                    (GtkEntry        *entry,
                                        gpointer         user_data);

gboolean
on_cmbPath_popup_menu                  (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_cmbPath_notify                      (GObject         *gobject,
                                        GParamSpec      *arg1,
                                        gpointer         user_data);

gboolean
on_cmbPath_popup_menu                  (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_cmbPath_set_focus_child             (GtkContainer    *container,
                                        GtkWidget       *widget,
                                        gpointer         user_data);

void
on_cmbPath_show                        (GtkWidget       *widget,
                                        gpointer         user_data);

gboolean
on_cmbPath_configure_event             (GtkWidget       *widget,
                                        GdkEventConfigure *event,
                                        gpointer         user_data);

gboolean
on_cmbPath_focus_in_event              (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data);

gboolean
on_cmbPath_enter_notify_event          (GtkWidget       *widget,
                                        GdkEventCrossing *event,
                                        gpointer         user_data);

void
on_cmbPath_add                         (GtkContainer    *container,
                                        GtkWidget       *widget,
                                        gpointer         user_data);

void
on_cmbPath_grab_focus                  (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_cmbPath_show                        (GtkWidget       *widget,
                                        gpointer         user_data);

gboolean
on_cmbPath_popup_menu                  (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_cmbPathTxt_changed                  (GtkEditable     *editable,
                                        gpointer         user_data);

void
on_cmbPathTxt_activate                 (GtkEntry        *entry,
                                        gpointer         user_data);

gboolean
on_quit                                (GtkWidget       *widget,
                                        GdkEvent        *event,
                                        gpointer         user_data);

void
on_rWP1_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rWP2_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rDP2_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rDP3_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rFS1_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rFS2_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rDP1_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_eWrPat_changed                      (GtkEditable     *editable,
                                        gpointer         user_data);

void
on_eDelPat_changed                     (GtkEditable     *editable,
                                        gpointer         user_data);

void
on_rRP1_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rRP2_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_eRdPat_changed                      (GtkEditable     *editable,
                                        gpointer         user_data);

void
on___changed                           (GtkEditable     *editable,
                                        gpointer         user_data);

void
on_eFileSize_changed                   (GtkEditable     *editable,
                                        gpointer         user_data);

void
on_rRP3_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rRP4_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
