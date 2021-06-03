/*
 * uijoystick.h
 *
 * Written by
 *  Mathias Roslund <vice.emu@amidog.se>
 *  Marco van den Heuvel <blackystardust68@yahoo.com>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef VICE_UIJOYSTICK_H_
#define VICE_UIJOYSTICK_H_

extern void ui_joystick_settings_c64_dialog(void);
extern void ui_joystick_settings_c64dtv_dialog(void);
extern void ui_joystick_settings_cbm5x0_dialog(void);
extern void ui_joystick_settings_pet_dialog(void);
extern void ui_joystick_settings_plus4_dialog(void);
extern void ui_joystick_settings_vic20_dialog(void);
extern void ui_joystick_swap_joystick(void);
extern void ui_joystick_swap_extra_joystick(void);

#endif
