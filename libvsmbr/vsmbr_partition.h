/*
 * Master Boot Record (MBR) partition table definitions
 *
 * Copyright (C) 2010-2016, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _VSMBR_PARTITION_H )
#define _VSMBR_PARTITION_H

#include <common.h>
#include <types.h>

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct vsmbr_partition_entry vsmbr_partition_entry_t;

struct vsmbr_partition_entry
{
	/* Flags
	 * Consists of 1 byte
	 */
	uint8_t flags;

	/* Partition start address in CHS
	 * Consists of 3 bytes
	 */
	uint8_t start_address_chs[ 3 ];

	/* Partition type
	 * Consists of 1 byte
	 */
	uint8_t type;

	/* Partition end address in CHS
	 * Consists of 3 bytes
	 */
	uint8_t end_address_chs[ 3 ];

	/* Partition start address in LBA
	 * Consists of 4 bytes
	 */
	uint8_t start_address_lba[ 4 ];

	/* Partition size
	 * Consists of 4 bytes
	 */
	uint8_t size[ 4 ];
};

#if defined( __cplusplus )
}
#endif

#endif

