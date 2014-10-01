/*
 *  CUPS add-on module for Canon Inkjet Printer.
 *  Copyright CANON INC. 2014
 *  All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307, USA.
 *
 * NOTE:
 *  - As a special exception, this program is permissible to link with the
 *    libraries released as the binary modules.
 *  - If you write modifications of your own for these programs, it is your
 *    choice whether to permit this exception to apply to your modifications.
 *    If you do not wish that, delete this exception.
*/

#define MAGIC_NUMBER_FOR_CNIJPWG	0x12340001
#define MAGIC_NUMBER_FOR_CNIJJPEG	0x12340002

typedef struct cndata {
	long	magic_num;
	long	image_size;
	short	next_page;
	short	page_num;
	long	reserve[13];
} CNDATA, *LPCNDATA;
