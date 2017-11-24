/* vifm
 * Copyright (C) 2012 xaizek.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef VIFM__MODES__DIALOGS__ATTR_DIALOG_WIN_H__
#define VIFM__MODES__DIALOGS__ATTR_DIALOG_WIN_H__

struct view_t;

/* Initializes attributes dialog mode. */
void init_attr_dialog_mode(void);

void enter_attr_mode(struct view_t *active_view);

/* Redraws properties change dialog. */
void redraw_attr_dialog(void);

#endif /* VIFM__MODES__DIALOGS__ATTR_DIALOG_WIN_H__ */

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab cinoptions-=(0 : */
/* vim: set cinoptions+=t0 filetype=c : */
