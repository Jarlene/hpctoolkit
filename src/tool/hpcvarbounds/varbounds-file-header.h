// -*-Mode: C++;-*- // technically C99

// * BeginRiceCopyright *****************************************************
//
// $HeadURL: https://outreach.scidac.gov/svn/hpctoolkit/trunk/src/tool/hpcfnbounds/fnbounds-file-header.h $
// $Id: fnbounds-file-header.h 3328 2010-12-23 23:39:09Z tallent $
//
// --------------------------------------------------------------------------
// Part of HPCToolkit (hpctoolkit.org)
//
// Information about sources of support for research and development of
// HPCToolkit is at 'hpctoolkit.org' and in 'README.Acknowledgments'.
// --------------------------------------------------------------------------
//
// Copyright ((c)) 2002-2011, Rice University
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
// * Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the
//   documentation and/or other materials provided with the distribution.
//
// * Neither the name of Rice University (RICE) nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// This software is provided by RICE and contributors "as is" and any
// express or implied warranties, including, but not limited to, the
// implied warranties of merchantability and fitness for a particular
// purpose are disclaimed. In no event shall RICE or contributors be
// liable for any direct, indirect, incidental, special, exemplary, or
// consequential damages (including, but not limited to, procurement of
// substitute goods or services; loss of use, data, or profits; or
// business interruption) however caused and on any theory of liability,
// whether in contract, strict liability, or tort (including negligence
// or otherwise) arising in any way out of the use of this software, even
// if advised of the possibility of such damage.
//
// ******************************************************* EndRiceCopyright *

//
//

#ifndef _VARBOUNDS_FILE_HEADER_
#define _VARBOUNDS_FILE_HEADER_

#include <stdint.h>

//
// Printf format strings for fnbounds file names and extensions.
// The %s conversion args are directory and basename.
//
#define VARBOUNDS_BINARY_FORMAT  "%s/%s.varbounds.bin"
#define VARBOUNDS_C_FORMAT       "%s/%s.varbounds.c"
#define VARBOUNDS_TEXT_FORMAT    "%s/%s.varbounds.txt"

#define VARBOUNDS_BINARY_FORMAT  "%s/%s.varbounds.bin"
//
// The extra info in the binary file of function addresses, written by
// hpcfnbounds-bin and read in the main process.  We call it "header",
// even though it's actually at the end of the file.
//
#define VARBOUNDS_MAGIC  0xf9f9f9f9

// Note: this must be cross-platform compatible (E.g. static
struct varbounds_file_header {
  uint64_t zero_pad;
  uint64_t magic;
  uint64_t num_entries;
  uint64_t reference_offset;
  int32_t  is_relocatable; // boolean
};

#endif
