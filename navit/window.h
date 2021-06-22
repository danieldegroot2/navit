/**
 * Navit, a modular navigation system.
 * Copyright (C) 2005-2009 Navit Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

#ifndef NAVIT_WINDOW_H
#define NAVIT_WINDOW_H
/**
 * Describes the Navit application window or equivalent.
 */
struct window {
	void *priv;                                    /**< Private data of the graphics implementation */
	int (*fullscreen)(struct window *win, int on); /**< Method to toggle fullscreen mode */
	void (*disable_suspend)(struct window *win);   /**< Method to disable suspend mode or screen savers */
};

#endif //NAVIT_WINDOW_H
