/*
 * openh323buildopts.h
 *
 * Build options generated by the configure script.
 *
 * Portable Windows Library
 *
 * Copyright (c) 2003 Equivalence Pty. Ltd.
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.0 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is Portable Windows Library.
 *
 * The Initial Developer of the Original Code is Equivalence Pty. Ltd.
 *
 * Contributor(s): ______________________________________.
 *
 * $Log$
 * Revision 1.15  2009/12/08 13:02:26  shorne
 * Adjust H323_H46024B compiler directive
 *
 * Revision 1.14  2009/12/08 03:55:28  shorne
 * First cut support for H.460.24 Annex B
 *
 * Revision 1.13  2009/11/17 10:53:02  shorne
 * Added Presence and UPnP switches
 *
 * Revision 1.12  2009/08/28 14:36:00  shorne
 * Fixes to enable compilation with PTLIB 2.6.4
 *
 * Revision 1.11  2009/08/21 07:01:06  shorne
 * Added H.460.9 Support
 *
 * Revision 1.10  2009/07/25 10:35:51  shorne
 * First cut of H.460.23/.24 support
 *
 * Revision 1.9  2009/07/09 15:11:12  shorne
 * Simplfied and standardised compiler directives
 *
 * Revision 1.8  2009/06/28 01:40:32  shorne
 * Fix to make sure PTBuildOpts are loaded
 *
 * Revision 1.7  2009/06/28 00:25:23  shorne
 * H.460.18 disabled by default (removed compile warning)
 *
 * Revision 1.6  2009/06/28 00:11:03  shorne
 * Added H.460.18/19 Support
 *
 * Revision 1.5  2009/06/02 12:57:40  willamowius
 * detect missing video in PTLib
 *
 * Revision 1.4  2008/01/01 00:16:12  shorne
 * Added GnuGknat and FileTransfer support
 *
 * Revision 1.3  2007/10/16 16:35:44  shorne
 * Added H.230 Support
 *
 * Revision 1.2  2007/08/07 22:25:46  shorne
 * update for H323_H350
 *
 * Revision 1.1  2007/08/06 20:50:50  shorne
 * First commit of h323plus
 *
 * Revision 1.31.2.5  2007/08/02 20:11:57  shorne
 * Added H.341 Support
 *
 * Revision 1.31.2.4  2007/07/20 22:03:26  shorne
 * Initial H.350 Support
 *
 * Revision 1.31.2.3  2007/02/19 20:11:05  shorne
 * Added Baseline H.239 Support
 *
 * Revision 1.31.2.2  2007/02/18 17:11:23  shorne
 * Added H.249 Extended UserInput Support
 *
 * Revision 1.31.2.1  2006/12/23 19:08:02  shorne
 * Plugin video codecs & sundry
 *
 * Revision 1.31  2006/07/23 08:48:21  rjongbloed
 * Fixed VPB configuration file support
 *
 * Revision 1.30  2006/06/23 03:18:23  shorne
 * Backport FECC (H.224) from Opal
 *
 * Revision 1.29  2006/05/30 11:12:26  hfriederich
 * Removing DISABLE_H460
 *
 * Revision 1.28  2006/05/17 04:17:51  shorne
 * Oops try again
 *
 * Revision 1.27  2006/05/17 03:36:52  shorne
 * DISABLE_H460 default under linux
 *
 * Revision 1.26  2006/01/18 07:46:08  csoutheren
 * Initial version of RTP aggregation (disabled by default)
 *
 * Revision 1.25  2005/08/30 01:12:38  csoutheren
 * Added automatic detection of OSP toolkit version on Unix
 *
 * Revision 1.24  2005/08/27 02:11:58  csoutheren
 * Added support for different pthread library required by new OSP toolkit on Windows
 * Added support for new parameters to GetFirst and GetNext
 * Fixed incorrect usage of destination address and destination device
 *
 * Revision 1.23  2005/08/15 01:55:33  csoutheren
 * Removed duplicate alias for osptoken.h
 *
 * Revision 1.22  2005/04/28 00:07:00  csoutheren
 * Allow compilation with OSP Toolkit without setting include directory
 *
 * Revision 1.21  2005/01/03 06:25:52  csoutheren
 * Added extensive support for disabling code modules at compile time
 *
 * Revision 1.20  2004/12/08 05:24:38  csoutheren
 * Changed pragma directive to match changes for Linux
 *
 * Revision 1.19  2004/12/08 01:59:23  csoutheren
 * initial support for Transnexus OSP toolkit
 *
 * Revision 1.18  2004/11/26 03:06:12  csoutheren
 * Added detection of Transnexus OSP toolkit under Windows
 *
 * Revision 1.17  2004/05/18 22:27:33  csoutheren
 * Initial support for embedded codecs
 *
 * Revision 1.16  2004/04/29 14:47:56  csoutheren
 * Reconfigured plugin makefiles per suggestions from Damien Sandras
 * Changed install targets to use $(INSTALL)
 *
 * Revision 1.15  2004/04/22 22:35:00  csoutheren
 * Fixed mispelling of Guilhem Tardy - my apologies to him
 *
 * Revision 1.14  2004/04/22 14:22:20  csoutheren
 * Added RFC 2190 H.263 code as created by Guilhem Tardy and AliceStreet
 * Many thanks to them for their contributions.
 *
 * Revision 1.13  2004/01/30 01:45:30  csoutheren
 * Moved some compiler flags to include files
 *
 * Revision 1.12  2004/01/27 10:55:24  csoutheren
 * Added version information to openh323buildopts.h
 *
 * Revision 1.11  2003/12/29 12:13:26  csoutheren
 * configure now checks for libspeex in system libraries and compares
 * version against version in local sources. Also use --enable-localspeex to
 * force use of local Speex or system Speex
 *
 * Revision 1.10  2003/12/03 06:47:11  csoutheren
 * Fixed yet another problem with configuring video under Windows
 *
 * Revision 1.9  2003/12/03 06:44:07  csoutheren
 * Fixed problem with configuring video under Windows
 *
 * Revision 1.8  2003/11/25 08:30:55  rjongbloed
 * Added ability to build system without video or audio sw codecs.
 *
 * Revision 1.7  2003/07/24 08:09:59  dereksmithies
 * Update to reflect new vic h263 codec, which is optionally loaded.
 *
 * Revision 1.6  2003/05/05 11:59:21  robertj
 * Changed to use autoconf style selection of options and subsystems.
 *
 * Revision 1.5  2003/05/02 07:59:34  robertj
 * Fixed AVCODEC directory missing slash
 *
 * Revision 1.4  2003/05/02 07:35:32  robertj
 * Fixed ffmpeg AVCODEC include file
 *
 * Revision 1.3  2003/05/02 07:27:23  robertj
 * Fixed voice age library
 *
 * Revision 1.2  2003/05/02 07:08:12  craigs
 * Removed DOS end fo line chars
 *
 * Revision 1.1  2003/05/02 07:04:11  craigs
 * Initial version
 *
 */

#ifndef _OPENH323_BUILDOPTS_H
#define _OPENH323_BUILDOPTS_H

#include <ptbuildopts.h>

#if PTLIB_MAJOR == 2 && PTLIB_MINOR == 6  
		#define PTLIB_VER 260
#endif
#if PTLIB_MAJOR == 2 && PTLIB_MINOR >= 7  
		#define PTLIB_VER 270
#endif

/////////////////////////////////////////////////
//
// Major options
//

#define OPENH323_MAJOR 1
#define OPENH323_MINOR 22
#define OPENH323_BUILD 0
#define OPENH323_VERSION "1.22.0"

#define H323_AUDIO_CODECS 1

#ifdef P_VIDEO
#define H323_VIDEO 1
#endif


//////////////////////////////////////////////////

#ifdef H323_AUDIO_CODECS

#undef H323_EMBEDDED_GSM

#endif // H323_AUDIO_CODECS

/////////////////////////////////////////////////
//
// Various item support
//

#define H323_AEC  1
#define H323_T38 1
#define H323_T120 1
#define H323_H224 1
#define H323_H230 1
#define H323_H239 1
#define H323_H248 1
#define H323_H249 1
#define H323_H341 1
#ifdef P_LDAP
#define H323_H350 1
#endif
#define H323_H450 1
#define H323_H460 1
#define H323_H4609 1
#if (PTLIB_VER > 260) 
	#define H323_H46018 1
	#define H323_H46023 1
	#if defined(H323_H46018) && defined(H323_H46023) && defined(P_SSL)
		#define H323_H46024A 1
	#endif
	#if defined(H323_H46018) && defined(H323_H46023)
		#define H323_H46024B 1
	#endif
	#if defined(H323_H46023) && (WINVER > 0x500)
		#define H323_UPnP 1
	#endif
#endif
#define H323_H460P 1
#define H323_H501 1
#if (PTLIB_VER > 260) 
	#define H323_GNUGK 1
#endif
#define H323_FILE 1

#undef H323_SIGNAL_AGGREGATE
#undef H323_RTP_AGGREGATE

#endif

// End Of File ///////////////////////////////////////////////////////////////

