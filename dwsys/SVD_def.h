/* SVD_def.h
 *
 * Copyright (C) 1994-2008 David Weenink
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */

#define ooSTRUCT SVD
oo_DEFINE_CLASS (SVD, Daata)

	oo_DOUBLE (tolerance)
	oo_INTEGER (numberOfRows)
	oo_INTEGER (numberOfColumns)
	oo_DOUBLE_MATRIX (u, numberOfRows, (numberOfColumns < numberOfRows ? numberOfColumns : numberOfRows))
	oo_DOUBLE_MATRIX (v, numberOfColumns, (numberOfColumns < numberOfRows ? numberOfColumns : numberOfRows))
	oo_DOUBLE_VECTOR (d, (numberOfColumns < numberOfRows ? numberOfColumns : numberOfRows))

	#if oo_DECLARING
		void v_info ()
			override;
	#endif

oo_END_CLASS (SVD)
#undef ooSTRUCT


#define ooSTRUCT GSVD
oo_DEFINE_CLASS (GSVD, Daata)

	oo_DOUBLE (tolerance)
	oo_INTEGER (numberOfColumns)
	oo_DOUBLE_MATRIX ( q, numberOfColumns, numberOfColumns)
	oo_DOUBLE_MATRIX ( r, numberOfColumns, numberOfColumns)
	oo_DOUBLE_VECTOR (d1, numberOfColumns)
	oo_DOUBLE_VECTOR (d2, numberOfColumns)

	#if oo_DECLARING
		void v_info ()
			override;
	#endif

oo_END_CLASS (GSVD)
#undef ooSTRUCT


/* End of file SVD_def.h */
