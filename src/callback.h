/*****************************************************************************/
/*  callback.h - callback fuctions for GUI                                   */
/*  Copyright (C) 2003 980501427 <h980501427@163.com>                      */
/*                                                                           */
/*  This program is free software; you can redistribute it and/or modify      */
/*  it under the terms of the GNU General Public License as published by     */
/*  the Free Software Foundation; either version 2 of the License, or        */
/*  (at your option) any later version.                                     */
/*                                                                          */
/*  This program is distributed in the hope that it will be useful,           */
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of            */
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             */
/*  GNU General Public License for more details.                             */
/*                                                                          */
/*  You should have received a copy of the GNU General Public License        */
/*  along with this program; if not, write to the Free Software              */
/*  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                */
/*****************************************************************************/

#ifndef __CALLBACK_H__
#define __CALLBACK_H__

#include <gtk/gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

void on_quit_activate (GtkMenuItem *menuitem, gpointer data);

void on_setup_activate (GtkMenuItem *menuitem, gpointer data);

void on_entry_name_activate (GtkEntry *entry, gpointer data);

void on_toggle_button_host_toggled (GtkToggleButton *togglebutton, gpointer data);

void on_toggle_button_connect_toggled (GtkToggleButton *togglebutton, gpointer data);

void on_button_start_clicked (GtkButton *button, gpointer data);

void on_button_exchange_clicked (GtkButton *button, gpointer data);

void on_button_draw_clicked (GtkButton *button, gpointer data);

void on_button_resign_clicked (GtkButton *button, gpointer data);

gboolean on_fixed_button_press_event (GtkWidget *widget, GdkEventButton  *event, gpointer data);

void on_entry_talk_activate (GtkEntry *entry, gpointer data);

void on_button_yes_clicked (GtkButton *button, gpointer data);

void on_button_no_clicked (GtkButton *button, gpointer data);

void on_button_cancel_clicked (GtkButton *button, gpointer data);

#ifdef __cplusplus
}
#endif

#endif /* __CALLBACK_H__ */
