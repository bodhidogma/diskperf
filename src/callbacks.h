#include <gnome.h>


gboolean
on_quit                                (GtkWidget       *widget,
                                        GdkEvent        *event,
                                        gpointer         user_data);

void
on_cmbPathTxt_changed                  (GtkEditable     *editable,
                                        gpointer         user_data);

void
on_rWP1_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rWP2_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rWP3_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rDP1_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rDP2_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rDP3_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rDP4_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rFS1_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rFS2_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rFS3_toggled                        (GtkToggleButton *togglebutton,
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
