/*
 * Copyright (C) 2004, 2005  Internet Systems Consortium, Inc. ("ISC")
 * Copyright (C) 1999-2001  Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/* $ISC: keyflags.h,v 1.10.18.2 2005/04/29 00:16:13 marka Exp $ */

#ifndef DNS_KEYFLAGS_H
#define DNS_KEYFLAGS_H 1

/*! \file */

#include <isc/lang.h>

#include <dns/types.h>

ISC_LANG_BEGINDECLS

isc_result_t
dns_keyflags_fromtext(dns_keyflags_t *flagsp, isc_textregion_t *source);
/*%<
 * Convert the text 'source' refers to into a DNSSEC KEY flags value.
 * The text may contain either a set of flag mnemonics separated by
 * vertical bars or a decimal flags value.  For compatibility with
 * older versions of BIND and the DNSSEC signer, octal values
 * prefixed with a zero and hexadecimal values prefixed with "0x"
 * are also accepted.
 *
 * Requires:
 *\li	'flagsp' is a valid pointer.
 *
 *\li	'source' is a valid text region.
 *
 * Returns:
 *\li	ISC_R_SUCCESS			on success
 *\li	ISC_R_RANGE			numeric flag value is out of range
 *\li	DNS_R_UNKNOWN			mnemonic flag is unknown
 */

ISC_LANG_ENDDECLS

#endif /* DNS_KEYFLAGS_H */
