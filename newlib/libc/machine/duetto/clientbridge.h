/****************************************************************
 *
 * Copyright (C) 2013 Alessandro Pignotti <alessandro@leaningtech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 ***************************************************************/

#include <stdio.h>

#ifdef __cplusplus
extern "C"
{
#endif
_READ_WRITE_RETURN_TYPE
_EXFUN(__duettowrite, (struct _reent *ptr _AND
       void *cookie _AND
       char const *buf _AND
       int n));
const char *
_EXFUN (_dtoa_r, (struct _reent *ptr _AND
	double _d _AND
	int mode _AND
	int ndigits _AND
	int *decpt _AND
	int *sign _AND
	const char **rve));
#ifdef __cplusplus
}
#endif
