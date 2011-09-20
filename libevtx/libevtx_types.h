/*
 * The internal type definitions
 *
 * Copyright (c) 2011, Joachim Metz <jbmetz@users.sourceforge.net>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBEVTX_INTERNAL_TYPES_H )
#define _LIBEVTX_INTERNAL_TYPES_H

#include <common.h>
#include <types.h>

/* Define HAVE_LOCAL_LIBEVTX for local use of libevtx
 * The definitions in <libevtx/types.h> are copied here
 * for local use of libevtx
 */
#if defined( HAVE_LOCAL_LIBEVTX )

/* The following type definitions hide internal data structures
 */
#if defined( HAVE_DEBUG_OUTPUT )
typedef struct libevtx_file {}		libevtx_file_t;
typedef struct libevtx_table {}	libevtx_table_t;
typedef struct libevtx_column {}	libevtx_column_t;
typedef struct libevtx_index {}	libevtx_index_t;
typedef struct libevtx_record {}	libevtx_record_t;
typedef struct libevtx_long_value {}	libevtx_long_value_t;
typedef struct libevtx_multi_value {}	libevtx_multi_value_t;

#else
typedef intptr_t libevtx_file_t;
typedef intptr_t libevtx_table_t;
typedef intptr_t libevtx_column_t;
typedef intptr_t libevtx_index_t;
typedef intptr_t libevtx_record_t;
typedef intptr_t libevtx_long_value_t;
typedef intptr_t libevtx_multi_value_t;

#endif

#endif

#endif
