/*
 * Worldvisions Weaver Software:
 *   Copyright (C) 1997-2004 Net Integration Technologies, Inc.
 *
 * Version numbers for the different parts of Weaver included here.
 *
 */
#ifndef __WVVER_H
#define __WVVER_H

// *_VER is a numerical version number for use ONLY in comparisons and
// internal data structures.
// *_VER_STRING is a string for use ONLY in display strings.
//
// Never mix and match them!  WEAVER_VER_STRING may be any
//  valid string, eg "4.5 beta 6" 
// 

#include "wvautoconf.h"

#ifndef VER_STRING_EXTRA
#define VER_STRING_EXTRA ""
#endif

#define WEAVER_VER			0x00043012
#define WEAVER_VER_STRING		"4.3.0 #18" VER_STRING_EXTRA
#define WEAVER_CODENAME			"zanykid"

#define WVSTREAMS_VER			0x00042000
#define WVSTREAMS_VER_STRING		"4.2" VER_STRING_EXTRA

#define WVDIAL_VER			0x00015400
#define WVDIAL_VER_STRING		"1.55" VER_STRING_EXTRA

#define TUNNELV_VER			0x00023000
#define TUNNELV_VER_STRING		"2.30" VER_STRING_EXTRA

#define WVTAPE_VER			0x00013000
#define WVTAPE_VER_STRING		"1.3" VER_STRING_EXTRA

#define RETCHMAIL_VER			0x00000800
#define RETCHMAIL_VER_STRING		"0.08" VER_STRING_EXTRA

#define WVTFTP_VER			0x00093000
#define WVTFTP_VER_STRING		"0.9.3" VER_STRING_EXTRA

#define WVPRINT_VER			0x00000800
#define WVPRINT_VER_STRING		"0.08" VER_STRING_EXTRA

#define POLLY_VER			0x00000000
#define POLLY_VER_STRING		"0.00 (Danger!)" VER_STRING_EXTRA

#define TWISTER_VER			0x00000000
#define TWISTER_VER_STRING		"0.00 (Deadly!)" VER_STRING_EXTRA

#define WVSYSLOGD_VER			0x00040000
#define WVSYSLOGD_VER_STRING		"4.0.0" VER_STRING_EXTRA

#define WVFILEMON_VER			0x00000000
#define WVFILEMON_VER_STRING		"0.00 (Deadly!)" VER_STRING_EXTRA

#define FUNFS_VER			0x00000000
#define FUNFS_VER_STRING		"0.00 (Deadly!)" VER_STRING_EXTRA

#define UNICUPSD_VER			0x00000000
#define UNICUPSD_VER_STRING		"0.00 (Deadly!)" VER_STRING_EXTRA

#define SSOYAC_VER			0x00001000
#define SSOYAC_VER_STRING		"0.1.1 (Deadly!)" VER_STRING_EXTRA

#define SSOYAD_VER			0x00000000
#define SSOYAD_VER_STRING		"0.1.1 (Deadly!)" VER_STRING_EXTRA

#define EXPRLIC_VER			0x00000000
#define EXPRLIC_VER_STRING		"0.00 (Deadly!)" VER_STRING_EXTRA

#define NSS_UNICONF_VER			0x00009100
#define NSS_UNICONF_VER_STRING		"0.9.1" VER_STRING_EXTRA

#define PASSWD_UNICONF_VER		0x00001000
#define PASSWD_UNICONF_VER_STRING	"0.1.0" VER_STRING_EXTRA

#define WVMAPI_VER			0x00001000
#define WVMAPI_VER_STRING		"0.1.1"

#define HIPAAMON_VER			0x00000000
#define HIPAAMON_VER_STRING		"0.00 (Deadly!)"

#define UNITY_VER			0x00001000
#define UNITY_VER_STRING		"0.1"

#endif // __WVVER_H
