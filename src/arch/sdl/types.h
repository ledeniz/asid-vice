/*
 * types.h - Type definitions for VICE.
 *
 * Written by
 *  Hannu Nuotio <hannu.nuotio@tut.fi>
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

#ifndef VICE_TYPES_H
#define VICE_TYPES_H

#include "vice.h"

#include "vice_sdl.h"

#ifdef WIN32_COMPILE
typedef unsigned char BYTE;
typedef unsigned short WORD;
#ifndef _MINWINDEF_
typedef unsigned long DWORD;
#endif
typedef signed char SIGNED_CHAR;
typedef signed short SWORD;
typedef signed long SDWORD;
#else
#define BYTE Uint8
#define SIGNED_CHAR Sint8
#define WORD Uint16
#define SWORD Sint16
#define DWORD Uint32
#define SDWORD Sint32
#endif

typedef DWORD CLOCK;
/* Maximum value of a CLOCK.  */
#define CLOCK_MAX (~((CLOCK)0))

#ifdef _WIN64
#define vice_ptr_to_int(x) ((int)(long long)(x))
#define vice_ptr_to_uint(x) ((unsigned int)(unsigned long long)(x))
#define int_to_void_ptr(x) ((void *)(long long)(x))
#define uint_to_void_ptr(x) ((void *)(unsigned long long)(x))
#else
#define vice_ptr_to_int(x) ((int)(long)(x))
#define vice_ptr_to_uint(x) ((unsigned int)(unsigned long)(x))
#define int_to_void_ptr(x) ((void *)(long)(x))
#define uint_to_void_ptr(x) ((void *)(unsigned long)(x))
#endif

#endif
