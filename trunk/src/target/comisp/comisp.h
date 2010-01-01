/***************************************************************************
 *   Copyright (C) 2009 by Simon Qian <SimonQian@SimonQian.com>            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef __COMISP_H_INCLUDED__
#define __COMISP_H_INCLUDED__

#define COMISP_STRING					"comisp"
#define COMISP_STM32					0
#define COMISP_LPCARM					1

extern struct program_functions_t comisp_program_functions;

RESULT comisp_parse_argument(char cmd, const char *argu);
void comisp_print_comm_info(uint8_t i);
extern uint8_t comisp_mode_offset;

#endif /* __COMISP_H_INCLUDED__ */

