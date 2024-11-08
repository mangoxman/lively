/* lively-window.c
 *
 * Copyright 2024 mangoman
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "config.h"

#include "lively-window.h"

struct _LivelyWindow
{
	GtkApplicationWindow  parent_instance;

	/* Template widgets */
	GtkLabel            *label;
};

G_DEFINE_FINAL_TYPE (LivelyWindow, lively_window, GTK_TYPE_APPLICATION_WINDOW)

static void
lively_window_class_init (LivelyWindowClass *klass)
{
	GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

	gtk_widget_class_set_template_from_resource (widget_class, "/com/mangoman/lively/lively-window.ui");
	gtk_widget_class_bind_template_child (widget_class, LivelyWindow, label);
}

static void
lively_window_init (LivelyWindow *self)
{
	gtk_widget_init_template (GTK_WIDGET (self));
}
