/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <bonobo.h>
#include <gnome.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_wDiskPerf (void)
{
  GtkWidget *wDiskPerf;
  GtkWidget *vbox1;
  GtkWidget *table1;
  GtkWidget *frame1;
  GtkWidget *vbxInfo;
  GtkWidget *hbox2;
  GtkWidget *cmbPath;
  GtkWidget *cmbPathTxt;
  GtkWidget *lblSize;
  GtkWidget *label1;
  GtkWidget *frame2;
  GtkWidget *lblWrite;
  GtkWidget *label2;
  GtkWidget *frame3;
  GtkWidget *lblWrPattern;
  GtkWidget *label3;
  GtkWidget *frame4;
  GtkWidget *lblRdPat;
  GtkWidget *label4;
  GtkWidget *frWrite;
  GtkWidget *vbxWrite;
  GtkWidget *rWP1;
  GSList *rWP1_group = NULL;
  GtkWidget *rWP2;
  GtkWidget *rWP3;
  GtkWidget *eWrPat;
  GtkWidget *label7;
  GtkWidget *frDelete;
  GtkWidget *vbxDelete;
  GtkWidget *rDP1;
  GSList *rDP1_group = NULL;
  GtkWidget *rDP2;
  GtkWidget *rDP3;
  GtkWidget *rDP4;
  GtkWidget *eDelPat;
  GtkWidget *label6;
  GtkWidget *frRead;
  GtkWidget *vbxRead;
  GtkWidget *rRP1;
  GSList *rRP1_group = NULL;
  GtkWidget *rRP2;
  GtkWidget *rRP3;
  GtkWidget *eRdPat;
  GtkWidget *rRP4;
  GtkWidget *label8;
  GtkWidget *frFileSize;
  GtkWidget *vbxFileSize;
  GtkWidget *rFS1;
  GSList *rFS1_group = NULL;
  GtkWidget *rFS2;
  GtkWidget *rFS3;
  GtkWidget *_;
  GtkWidget *label5;
  GtkWidget *hbuttonbox1;
  GtkWidget *bCancel;
  GtkWidget *bExec;
  GtkWidget *bSave;
  GtkWidget *hbox1;
  GtkWidget *prgBar;
  GtkWidget *stBar;

  wDiskPerf = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (wDiskPerf), _("Disk Performance Utility"));

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (wDiskPerf), vbox1);

  table1 = gtk_table_new (2, 4, FALSE);
  gtk_widget_show (table1);
  gtk_box_pack_start (GTK_BOX (vbox1), table1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table1), 2);

  frame1 = gtk_frame_new (NULL);
  gtk_widget_show (frame1);
  gtk_table_attach (GTK_TABLE (table1), frame1, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (frame1), 1);

  vbxInfo = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbxInfo);
  gtk_container_add (GTK_CONTAINER (frame1), vbxInfo);

  hbox2 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox2);
  gtk_box_pack_start (GTK_BOX (vbxInfo), hbox2, TRUE, TRUE, 0);

  cmbPath = gtk_combo_new ();
  g_object_set_data (G_OBJECT (GTK_COMBO (cmbPath)->popwin),
                     "GladeParentKey", cmbPath);
  gtk_widget_show (cmbPath);
  gtk_box_pack_start (GTK_BOX (hbox2), cmbPath, TRUE, TRUE, 5);

  cmbPathTxt = GTK_COMBO (cmbPath)->entry;
  gtk_widget_show (cmbPathTxt);
  gtk_editable_set_editable (GTK_EDITABLE (cmbPathTxt), FALSE);

  lblSize = gtk_label_new (_("Size: ## KB\nFree: ## KB"));
  gtk_widget_show (lblSize);
  gtk_box_pack_start (GTK_BOX (vbxInfo), lblSize, TRUE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (lblSize), GTK_JUSTIFY_LEFT);

  label1 = gtk_label_new (_("Info"));
  gtk_widget_show (label1);
  gtk_frame_set_label_widget (GTK_FRAME (frame1), label1);
  gtk_label_set_justify (GTK_LABEL (label1), GTK_JUSTIFY_LEFT);

  frame2 = gtk_frame_new (NULL);
  gtk_widget_show (frame2);
  gtk_table_attach (GTK_TABLE (table1), frame2, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (frame2), 1);

  lblWrite = gtk_label_new (_("### KB/s"));
  gtk_widget_show (lblWrite);
  gtk_container_add (GTK_CONTAINER (frame2), lblWrite);
  gtk_label_set_justify (GTK_LABEL (lblWrite), GTK_JUSTIFY_LEFT);

  label2 = gtk_label_new (_("Max Write Speed"));
  gtk_widget_show (label2);
  gtk_frame_set_label_widget (GTK_FRAME (frame2), label2);
  gtk_label_set_justify (GTK_LABEL (label2), GTK_JUSTIFY_LEFT);

  frame3 = gtk_frame_new (NULL);
  gtk_widget_show (frame3);
  gtk_table_attach (GTK_TABLE (table1), frame3, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (frame3), 1);

  lblWrPattern = gtk_label_new (_("### KB/s"));
  gtk_widget_show (lblWrPattern);
  gtk_container_add (GTK_CONTAINER (frame3), lblWrPattern);
  gtk_label_set_justify (GTK_LABEL (lblWrPattern), GTK_JUSTIFY_LEFT);

  label3 = gtk_label_new (_("Write Speed"));
  gtk_widget_show (label3);
  gtk_frame_set_label_widget (GTK_FRAME (frame3), label3);
  gtk_label_set_justify (GTK_LABEL (label3), GTK_JUSTIFY_LEFT);

  frame4 = gtk_frame_new (NULL);
  gtk_widget_show (frame4);
  gtk_table_attach (GTK_TABLE (table1), frame4, 3, 4, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  lblRdPat = gtk_label_new (_("#### KB/s"));
  gtk_widget_show (lblRdPat);
  gtk_container_add (GTK_CONTAINER (frame4), lblRdPat);
  gtk_label_set_justify (GTK_LABEL (lblRdPat), GTK_JUSTIFY_LEFT);

  label4 = gtk_label_new (_("Read Speed"));
  gtk_widget_show (label4);
  gtk_frame_set_label_widget (GTK_FRAME (frame4), label4);
  gtk_label_set_justify (GTK_LABEL (label4), GTK_JUSTIFY_LEFT);

  frWrite = gtk_frame_new (NULL);
  gtk_widget_show (frWrite);
  gtk_table_attach (GTK_TABLE (table1), frWrite, 2, 3, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (frWrite), 1);

  vbxWrite = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbxWrite);
  gtk_container_add (GTK_CONTAINER (frWrite), vbxWrite);

  rWP1 = gtk_radio_button_new_with_mnemonic (NULL, _("16K"));
  gtk_widget_show (rWP1);
  gtk_box_pack_start (GTK_BOX (vbxWrite), rWP1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rWP1), rWP1_group);
  rWP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rWP1));

  rWP2 = gtk_radio_button_new_with_mnemonic (NULL, _("32K"));
  gtk_widget_show (rWP2);
  gtk_box_pack_start (GTK_BOX (vbxWrite), rWP2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rWP2), rWP1_group);
  rWP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rWP2));

  rWP3 = gtk_radio_button_new_with_mnemonic (NULL, _("Custom (KB)"));
  gtk_widget_show (rWP3);
  gtk_box_pack_start (GTK_BOX (vbxWrite), rWP3, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rWP3), rWP1_group);
  rWP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rWP3));

  eWrPat = gtk_entry_new ();
  gtk_widget_show (eWrPat);
  gtk_box_pack_end (GTK_BOX (vbxWrite), eWrPat, FALSE, FALSE, 0);
  gtk_widget_set_size_request (eWrPat, 40, -2);
  gtk_widget_set_sensitive (eWrPat, FALSE);
  gtk_entry_set_max_length (GTK_ENTRY (eWrPat), 2);
  gtk_entry_set_text (GTK_ENTRY (eWrPat), _("64"));

  label7 = gtk_label_new (_("Write Pattern"));
  gtk_widget_show (label7);
  gtk_frame_set_label_widget (GTK_FRAME (frWrite), label7);
  gtk_label_set_justify (GTK_LABEL (label7), GTK_JUSTIFY_LEFT);

  frDelete = gtk_frame_new (NULL);
  gtk_widget_show (frDelete);
  gtk_table_attach (GTK_TABLE (table1), frDelete, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 1, 1);

  vbxDelete = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbxDelete);
  gtk_container_add (GTK_CONTAINER (frDelete), vbxDelete);

  rDP1 = gtk_radio_button_new_with_mnemonic (NULL, _("Every Other File"));
  gtk_widget_show (rDP1);
  gtk_box_pack_start (GTK_BOX (vbxDelete), rDP1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rDP1), rDP1_group);
  rDP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rDP1));

  rDP2 = gtk_radio_button_new_with_mnemonic (NULL, _("Every 3rd"));
  gtk_widget_show (rDP2);
  gtk_box_pack_start (GTK_BOX (vbxDelete), rDP2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rDP2), rDP1_group);
  rDP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rDP2));

  rDP3 = gtk_radio_button_new_with_mnemonic (NULL, _("Random"));
  gtk_widget_show (rDP3);
  gtk_box_pack_start (GTK_BOX (vbxDelete), rDP3, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rDP3), rDP1_group);
  rDP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rDP3));

  rDP4 = gtk_radio_button_new_with_mnemonic (NULL, _("Custom (Evry N)"));
  gtk_widget_show (rDP4);
  gtk_box_pack_start (GTK_BOX (vbxDelete), rDP4, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rDP4), rDP1_group);
  rDP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rDP4));

  eDelPat = gtk_entry_new ();
  gtk_widget_show (eDelPat);
  gtk_box_pack_end (GTK_BOX (vbxDelete), eDelPat, FALSE, FALSE, 0);
  gtk_widget_set_size_request (eDelPat, 40, -2);
  gtk_widget_set_sensitive (eDelPat, FALSE);
  gtk_entry_set_max_length (GTK_ENTRY (eDelPat), 1);
  gtk_entry_set_text (GTK_ENTRY (eDelPat), _("4"));

  label6 = gtk_label_new (_("Delete Pattern"));
  gtk_widget_show (label6);
  gtk_frame_set_label_widget (GTK_FRAME (frDelete), label6);
  gtk_label_set_justify (GTK_LABEL (label6), GTK_JUSTIFY_LEFT);

  frRead = gtk_frame_new (NULL);
  gtk_widget_show (frRead);
  gtk_table_attach (GTK_TABLE (table1), frRead, 3, 4, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  vbxRead = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbxRead);
  gtk_container_add (GTK_CONTAINER (frRead), vbxRead);

  rRP1 = gtk_radio_button_new_with_mnemonic (NULL, _("Every Other File"));
  gtk_widget_show (rRP1);
  gtk_box_pack_start (GTK_BOX (vbxRead), rRP1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rRP1), rRP1_group);
  rRP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rRP1));

  rRP2 = gtk_radio_button_new_with_mnemonic (NULL, _("Every 3rd"));
  gtk_widget_show (rRP2);
  gtk_box_pack_start (GTK_BOX (vbxRead), rRP2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rRP2), rRP1_group);
  rRP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rRP2));

  rRP3 = gtk_radio_button_new_with_mnemonic (NULL, _("Random"));
  gtk_widget_show (rRP3);
  gtk_box_pack_start (GTK_BOX (vbxRead), rRP3, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rRP3), rRP1_group);
  rRP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rRP3));

  eRdPat = gtk_entry_new ();
  gtk_widget_show (eRdPat);
  gtk_box_pack_end (GTK_BOX (vbxRead), eRdPat, FALSE, FALSE, 0);
  gtk_widget_set_size_request (eRdPat, 58, -2);
  gtk_entry_set_text (GTK_ENTRY (eRdPat), _("4"));

  rRP4 = gtk_radio_button_new_with_mnemonic (NULL, _("Custom (Evry N)"));
  gtk_widget_show (rRP4);
  gtk_box_pack_start (GTK_BOX (vbxRead), rRP4, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rRP4), rRP1_group);
  rRP1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rRP4));

  label8 = gtk_label_new (_("Read Pattern"));
  gtk_widget_show (label8);
  gtk_frame_set_label_widget (GTK_FRAME (frRead), label8);
  gtk_label_set_justify (GTK_LABEL (label8), GTK_JUSTIFY_LEFT);

  frFileSize = gtk_frame_new (NULL);
  gtk_widget_show (frFileSize);
  gtk_table_attach (GTK_TABLE (table1), frFileSize, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_widget_set_size_request (frFileSize, 103, 104);
  gtk_container_set_border_width (GTK_CONTAINER (frFileSize), 1);

  vbxFileSize = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbxFileSize);
  gtk_container_add (GTK_CONTAINER (frFileSize), vbxFileSize);

  rFS1 = gtk_radio_button_new_with_mnemonic (NULL, _("16K"));
  gtk_widget_show (rFS1);
  gtk_box_pack_start (GTK_BOX (vbxFileSize), rFS1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rFS1), rFS1_group);
  rFS1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rFS1));

  rFS2 = gtk_radio_button_new_with_mnemonic (NULL, _("32K"));
  gtk_widget_show (rFS2);
  gtk_box_pack_start (GTK_BOX (vbxFileSize), rFS2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rFS2), rFS1_group);
  rFS1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rFS2));

  rFS3 = gtk_radio_button_new_with_mnemonic (NULL, _("Custom (KB)"));
  gtk_widget_show (rFS3);
  gtk_box_pack_start (GTK_BOX (vbxFileSize), rFS3, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rFS3), rFS1_group);
  rFS1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rFS3));

  _ = gtk_entry_new ();
  gtk_widget_show (_);
  gtk_box_pack_end (GTK_BOX (vbxFileSize), _, FALSE, FALSE, 0);
  gtk_widget_set_size_request (_, 58, -2);
  gtk_widget_set_sensitive (_, FALSE);
  gtk_entry_set_text (GTK_ENTRY (_), _("64"));

  label5 = gtk_label_new (_("File Size"));
  gtk_widget_show (label5);
  gtk_frame_set_label_widget (GTK_FRAME (frFileSize), label5);
  gtk_label_set_justify (GTK_LABEL (label5), GTK_JUSTIFY_LEFT);

  hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbuttonbox1, FALSE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbuttonbox1), 3);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox1), GTK_BUTTONBOX_SPREAD);

  bCancel = gtk_button_new_from_stock ("gtk-cancel");
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), bCancel);
  GTK_WIDGET_SET_FLAGS (bCancel, GTK_CAN_DEFAULT);

  bExec = gtk_button_new_from_stock ("gtk-execute");
  gtk_widget_show (bExec);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), bExec);
  GTK_WIDGET_SET_FLAGS (bExec, GTK_CAN_DEFAULT);

  bSave = gtk_button_new_from_stock ("gtk-save");
  gtk_widget_show (bSave);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), bSave);
  gtk_widget_set_sensitive (bSave, FALSE);
  GTK_WIDGET_SET_FLAGS (bSave, GTK_CAN_DEFAULT);

  hbox1 = gtk_hbox_new (TRUE, 1);
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox1, FALSE, TRUE, 1);
  gtk_container_set_border_width (GTK_CONTAINER (hbox1), 1);

  prgBar = gtk_progress_bar_new ();
  gtk_widget_show (prgBar);
  gtk_box_pack_start (GTK_BOX (hbox1), prgBar, FALSE, TRUE, 2);
  gtk_progress_bar_set_fraction (GTK_PROGRESS_BAR (prgBar), 0.1);

  stBar = gtk_statusbar_new ();
  gtk_widget_show (stBar);
  gtk_box_pack_start (GTK_BOX (hbox1), stBar, FALSE, TRUE, 0);
  gtk_widget_set_size_request (stBar, -2, 20);

  g_signal_connect ((gpointer) wDiskPerf, "delete_event",
                    G_CALLBACK (on_quit),
                    NULL);
  g_signal_connect ((gpointer) cmbPathTxt, "changed",
                    G_CALLBACK (on_cmbPathTxt_changed),
                    NULL);
  g_signal_connect ((gpointer) rWP1, "toggled",
                    G_CALLBACK (on_rWP1_toggled),
                    NULL);
  g_signal_connect ((gpointer) rWP2, "toggled",
                    G_CALLBACK (on_rWP2_toggled),
                    NULL);
  g_signal_connect ((gpointer) rWP3, "toggled",
                    G_CALLBACK (on_rWP3_toggled),
                    NULL);
  g_signal_connect ((gpointer) rDP1, "toggled",
                    G_CALLBACK (on_rDP1_toggled),
                    NULL);
  g_signal_connect ((gpointer) rDP2, "toggled",
                    G_CALLBACK (on_rDP2_toggled),
                    NULL);
  g_signal_connect ((gpointer) rDP3, "toggled",
                    G_CALLBACK (on_rDP3_toggled),
                    NULL);
  g_signal_connect ((gpointer) rDP4, "toggled",
                    G_CALLBACK (on_rDP4_toggled),
                    NULL);
  g_signal_connect ((gpointer) rFS1, "toggled",
                    G_CALLBACK (on_rFS1_toggled),
                    NULL);
  g_signal_connect ((gpointer) rFS2, "toggled",
                    G_CALLBACK (on_rFS2_toggled),
                    NULL);
  g_signal_connect ((gpointer) rFS3, "toggled",
                    G_CALLBACK (on_rFS3_toggled),
                    NULL);
  g_signal_connect ((gpointer) bCancel, "clicked",
                    G_CALLBACK (on_bCancel_clicked),
                    NULL);
  g_signal_connect ((gpointer) bExec, "clicked",
                    G_CALLBACK (on_bExec_activate),
                    NULL);
  g_signal_connect ((gpointer) bSave, "clicked",
                    G_CALLBACK (on_bSave_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (wDiskPerf, wDiskPerf, "wDiskPerf");
  GLADE_HOOKUP_OBJECT (wDiskPerf, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (wDiskPerf, table1, "table1");
  GLADE_HOOKUP_OBJECT (wDiskPerf, frame1, "frame1");
  GLADE_HOOKUP_OBJECT (wDiskPerf, vbxInfo, "vbxInfo");
  GLADE_HOOKUP_OBJECT (wDiskPerf, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (wDiskPerf, cmbPath, "cmbPath");
  GLADE_HOOKUP_OBJECT (wDiskPerf, cmbPathTxt, "cmbPathTxt");
  GLADE_HOOKUP_OBJECT (wDiskPerf, lblSize, "lblSize");
  GLADE_HOOKUP_OBJECT (wDiskPerf, label1, "label1");
  GLADE_HOOKUP_OBJECT (wDiskPerf, frame2, "frame2");
  GLADE_HOOKUP_OBJECT (wDiskPerf, lblWrite, "lblWrite");
  GLADE_HOOKUP_OBJECT (wDiskPerf, label2, "label2");
  GLADE_HOOKUP_OBJECT (wDiskPerf, frame3, "frame3");
  GLADE_HOOKUP_OBJECT (wDiskPerf, lblWrPattern, "lblWrPattern");
  GLADE_HOOKUP_OBJECT (wDiskPerf, label3, "label3");
  GLADE_HOOKUP_OBJECT (wDiskPerf, frame4, "frame4");
  GLADE_HOOKUP_OBJECT (wDiskPerf, lblRdPat, "lblRdPat");
  GLADE_HOOKUP_OBJECT (wDiskPerf, label4, "label4");
  GLADE_HOOKUP_OBJECT (wDiskPerf, frWrite, "frWrite");
  GLADE_HOOKUP_OBJECT (wDiskPerf, vbxWrite, "vbxWrite");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rWP1, "rWP1");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rWP2, "rWP2");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rWP3, "rWP3");
  GLADE_HOOKUP_OBJECT (wDiskPerf, eWrPat, "eWrPat");
  GLADE_HOOKUP_OBJECT (wDiskPerf, label7, "label7");
  GLADE_HOOKUP_OBJECT (wDiskPerf, frDelete, "frDelete");
  GLADE_HOOKUP_OBJECT (wDiskPerf, vbxDelete, "vbxDelete");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rDP1, "rDP1");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rDP2, "rDP2");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rDP3, "rDP3");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rDP4, "rDP4");
  GLADE_HOOKUP_OBJECT (wDiskPerf, eDelPat, "eDelPat");
  GLADE_HOOKUP_OBJECT (wDiskPerf, label6, "label6");
  GLADE_HOOKUP_OBJECT (wDiskPerf, frRead, "frRead");
  GLADE_HOOKUP_OBJECT (wDiskPerf, vbxRead, "vbxRead");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rRP1, "rRP1");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rRP2, "rRP2");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rRP3, "rRP3");
  GLADE_HOOKUP_OBJECT (wDiskPerf, eRdPat, "eRdPat");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rRP4, "rRP4");
  GLADE_HOOKUP_OBJECT (wDiskPerf, label8, "label8");
  GLADE_HOOKUP_OBJECT (wDiskPerf, frFileSize, "frFileSize");
  GLADE_HOOKUP_OBJECT (wDiskPerf, vbxFileSize, "vbxFileSize");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rFS1, "rFS1");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rFS2, "rFS2");
  GLADE_HOOKUP_OBJECT (wDiskPerf, rFS3, "rFS3");
  GLADE_HOOKUP_OBJECT (wDiskPerf, _, "_");
  GLADE_HOOKUP_OBJECT (wDiskPerf, label5, "label5");
  GLADE_HOOKUP_OBJECT (wDiskPerf, hbuttonbox1, "hbuttonbox1");
  GLADE_HOOKUP_OBJECT (wDiskPerf, bCancel, "bCancel");
  GLADE_HOOKUP_OBJECT (wDiskPerf, bExec, "bExec");
  GLADE_HOOKUP_OBJECT (wDiskPerf, bSave, "bSave");
  GLADE_HOOKUP_OBJECT (wDiskPerf, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (wDiskPerf, prgBar, "prgBar");
  GLADE_HOOKUP_OBJECT (wDiskPerf, stBar, "stBar");

  return wDiskPerf;
}
