/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (ocserv-args.c)
 *  
 *  It has been AutoGen-ed  March 12, 2013 at 11:39:41 PM by AutoGen 5.16
 *  From the definitions    ocserv-args.def
 *  and the template file   options
 *
 * Generated from AutoOpts 36:4:11 templates.
 *
 *  AutoOpts is a copyrighted work.  This source file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the ocserv author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The ocserv program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 2013 Nikos Mavrogiannopoulos, all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the
 *  GNU General Public License, version 2 <http://gnu.org/licenses/gpl.html>
 *
 *  ocserv is free software: you can redistribute it and/or modify it
 *  under the terms of version 2 of the GNU General Public License,
 *  as published by the Free Software Foundation.
 *  
 *  ocserv is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License,
 *  version 2, along with this program.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __doxygen__
#define OPTION_CODE_COMPILE 1
#include "ocserv-args.h"
#include <sys/types.h>

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef  __cplusplus
extern "C" {
#endif
extern FILE * option_usage_fp;

/* TRANSLATORS: choose the translation for option names wisely because you
                cannot ever change your mind. */
#define zCopyright      (ocserv_opt_strs+0)
#define zLicenseDescrip (ocserv_opt_strs+254)


#ifndef NULL
#  define NULL 0
#endif

/*
 *  ocserv option static const strings
 */
static char const ocserv_opt_strs[1840] =
/*     0 */ "ocserv 0.0.2\n"
            "Copyright (C) 2013 Nikos Mavrogiannopoulos, all rights reserved.\n"
            "This is free software. It is licensed for use, modification and\n"
            "redistribution under the terms of the\n"
            "GNU General Public License, version 2 <http://gnu.org/licenses/gpl.html>\n\0"
/*   254 */ "ocserv is free software: you can redistribute it and/or modify it under the\n"
            "terms of version 2 of the GNU General Public License, as published by the\n"
            "Free Software Foundation.\n\n"
            "ocserv is distributed in the hope that it will be useful, but WITHOUT ANY\n"
            "WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS\n"
            "FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more\n"
            "details.\n\n"
            "You should have received a copy of the GNU General Public License, version\n"
            "2, along with this program.  If not, see <http://www.gnu.org/licenses/>.\n\0"
/*   809 */ "Do not fork into background\0"
/*   837 */ "FOREGROUND\0"
/*   848 */ "foreground\0"
/*   859 */ "Enable verbose TLS debugging information\0"
/*   900 */ "TLS_DEBUG\0"
/*   910 */ "tls-debug\0"
/*   920 */ "Enable verbose network debugging information\0"
/*   965 */ "DEBUG\0"
/*   971 */ "debug\0"
/*   977 */ "Configuration file for the server\0"
/*  1011 */ "CONFIG\0"
/*  1018 */ "config\0"
/*  1025 */ "Display extended usage information and exit\0"
/*  1069 */ "help\0"
/*  1074 */ "Extended usage information passed thru pager\0"
/*  1119 */ "more-help\0"
/*  1129 */ "Output version information and exit\0"
/*  1165 */ "version\0"
/*  1173 */ "OCSERV\0"
/*  1180 */ "ocserv - OpenConnect server - Ver. 0.0.2\n"
            "USAGE:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]...\n\0"
/*  1279 */ "openconnect-devel@lists.infradead.org\0"
/*  1317 */ "\n\n\0"
/*  1320 */ "\n"
            "This program is openconnect VPN server (ocserv), a server compatible with\n"
            "the openconnect VPN client.  It is believed to be compatible with the\n"
            "protocol used by CISCO's AnyConnect SSL VPN.\n\n"
            "Multiple authentication methods are available including PAM and certificate\n"
            "authentication.  Authenticated users are assigned an unprivileged worker\n"
            "process and obtain a networking (tun) device and IP from a configurable\n"
            "pool of addresses.\n\0"
/*  1752 */ "ocserv 0.0.2\0"
/*  1765 */ "Usage: ocserv [options] -c [config]\n"
            "ocserv --help for usage instructions.\n";

/*
 *  foreground option description:
 */
#define FOREGROUND_DESC      (ocserv_opt_strs+809)
#define FOREGROUND_NAME      (ocserv_opt_strs+837)
#define FOREGROUND_name      (ocserv_opt_strs+848)
#define FOREGROUND_FLAGS     (OPTST_DISABLED)

/*
 *  tls-debug option description:
 */
#define TLS_DEBUG_DESC      (ocserv_opt_strs+859)
#define TLS_DEBUG_NAME      (ocserv_opt_strs+900)
#define TLS_DEBUG_name      (ocserv_opt_strs+910)
#define TLS_DEBUG_FLAGS     (OPTST_DISABLED)

/*
 *  debug option description:
 */
#define DEBUG_DESC      (ocserv_opt_strs+920)
#define DEBUG_NAME      (ocserv_opt_strs+965)
#define DEBUG_name      (ocserv_opt_strs+971)
#define DEBUG_FLAGS     (OPTST_DISABLED)

/*
 *  config option description:
 */
#define CONFIG_DESC      (ocserv_opt_strs+977)
#define CONFIG_NAME      (ocserv_opt_strs+1011)
#define CONFIG_name      (ocserv_opt_strs+1018)
#define CONFIG_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_FILE))

/*
 *  Help/More_Help/Version option descriptions:
 */
#define HELP_DESC       (ocserv_opt_strs+1025)
#define HELP_name       (ocserv_opt_strs+1069)
#ifdef HAVE_WORKING_FORK
#define MORE_HELP_DESC  (ocserv_opt_strs+1074)
#define MORE_HELP_name  (ocserv_opt_strs+1119)
#define MORE_HELP_FLAGS (OPTST_IMM | OPTST_NO_INIT)
#else
#define MORE_HELP_DESC  NULL
#define MORE_HELP_name  NULL
#define MORE_HELP_FLAGS (OPTST_OMITTED | OPTST_NO_INIT)
#endif
#ifdef NO_OPTIONAL_OPT_ARGS
#  define VER_FLAGS     (OPTST_IMM | OPTST_NO_INIT)
#else
#  define VER_FLAGS     (OPTST_SET_ARGTYPE(OPARG_TYPE_STRING) | \
                         OPTST_ARG_OPTIONAL | OPTST_IMM | OPTST_NO_INIT)
#endif
#define VER_DESC        (ocserv_opt_strs+1129)
#define VER_name        (ocserv_opt_strs+1165)
/*
 *  Declare option callback procedures
 */
extern tOptProc
    optionBooleanVal,   optionNestedVal,    optionNumericVal,
    optionPagedUsage,   optionPrintVersion, optionResetOpt,
    optionStackArg,     optionTimeDate,     optionTimeVal,
    optionUnstackArg,   optionVendorOption;
static tOptProc
    doOptConfig, doUsageOpt;
#define VER_PROC        optionPrintVersion

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 *  Define the ocserv Option Descriptions.
 * This is an array of OPTION_CT entries, one for each
 * option that the ocserv program responds to.
 */
static tOptDesc optDesc[OPTION_CT] = {
  {  /* entry idx, value */ 0, VALUE_OPT_FOREGROUND,
     /* equiv idx, value */ 0, VALUE_OPT_FOREGROUND,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ FOREGROUND_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --foreground */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ FOREGROUND_DESC, FOREGROUND_NAME, FOREGROUND_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_OPT_TLS_DEBUG,
     /* equiv idx, value */ 1, VALUE_OPT_TLS_DEBUG,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ TLS_DEBUG_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --tls-debug */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ TLS_DEBUG_DESC, TLS_DEBUG_NAME, TLS_DEBUG_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 2, VALUE_OPT_DEBUG,
     /* equiv idx, value */ 2, VALUE_OPT_DEBUG,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ DEBUG_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --debug */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ DEBUG_DESC, DEBUG_NAME, DEBUG_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 3, VALUE_OPT_CONFIG,
     /* equiv idx, value */ 3, VALUE_OPT_CONFIG,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ CONFIG_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --config */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptConfig,
     /* desc, NAME, name */ CONFIG_DESC, CONFIG_NAME, CONFIG_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_VERSION, VALUE_OPT_VERSION,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_VERSION,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VER_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ VER_PROC,
     /* desc, NAME, name */ VER_DESC, NULL, VER_name,
     /* disablement strs */ NULL, NULL },



  {  /* entry idx, value */ INDEX_OPT_HELP, VALUE_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ HELP_DESC, NULL, HELP_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_MORE_HELP, VALUE_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_MORE_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ MORE_HELP_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ MORE_HELP_DESC, NULL, MORE_HELP_name,
     /* disablement strs */ NULL, NULL }
};


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Define the ocserv Option Environment
 */
#define zPROGNAME       (ocserv_opt_strs+1173)
#define zUsageTitle     (ocserv_opt_strs+1180)
#define zRcName         NULL
#define apzHomeList     NULL
#define zBugsAddr       (ocserv_opt_strs+1279)
#define zExplain        (ocserv_opt_strs+1317)
#define zDetail         (ocserv_opt_strs+1320)
#define zFullVersion    (ocserv_opt_strs+1752)
/* extracted from optcode.tlib near line 350 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE | OPTPROC_NXLAT_OPT
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */


#define ocserv_full_usage (NULL)

#define ocserv_short_usage (ocserv_opt_strs+1765)

#endif /* not defined __doxygen__ */

/*
 *  Create the static procedure(s) declared above.
 */
/**
 * The callout function that invokes the optionUsage function.
 *
 * @param pOptions the AutoOpts option description structure
 * @param pOptDesc the descriptor for the "help" (usage) option.
 * @noreturn
 */
static void
doUsageOpt(tOptions * pOptions, tOptDesc * pOptDesc)
{
    optionUsage(&ocservOptions, OCSERV_EXIT_SUCCESS);
    /* NOTREACHED */
    (void)pOptDesc;
    (void)pOptions;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 * Code to handle the config option.
 *
 * @param pOptions the ocserv options data structure
 * @param pOptDesc the option descriptor for this option.
 */
static void
doOptConfig(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static teOptFileType const  type =
        FTYPE_MODE_MUST_EXIST + FTYPE_MODE_NO_OPEN;
    static tuFileMode           mode;
#ifndef O_CLOEXEC
#  define O_CLOEXEC 0
#endif
    mode.file_flags = O_CLOEXEC;

    optionFileCheck(pOptions, pOptDesc, type, mode);
}
/* extracted from optmain.tlib near line 1113 */

/**
 * The directory containing the data associated with ocserv.
 */
#ifndef  PKGDATADIR
# define PKGDATADIR ""
#endif

/**
 * Information about the person or institution that packaged ocserv
 * for the current distribution.
 */
#ifndef  WITH_PACKAGER
# define ocserv_packager_info NULL
#else
static char const ocserv_packager_info[] =
    "Packaged by " WITH_PACKAGER

# ifdef WITH_PACKAGER_VERSION
        " ("WITH_PACKAGER_VERSION")"
# endif

# ifdef WITH_PACKAGER_BUG_REPORTS
    "\nReport ocserv bugs to " WITH_PACKAGER_BUG_REPORTS
# endif
    "\n";
#endif
#ifndef __doxygen__

#endif /* __doxygen__ */
/**
 * The option definitions for ocserv.  The one structure that
 * binds them all.
 */
tOptions ocservOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_NO_ARGS
    + OPTPROC_GNUUSAGE
    + OPTPROC_MISUSE ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zLicenseDescrip,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    optionUsage, /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_OPT_MORE_HELP, /* more-help option index */
      NO_EQUIVALENT, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    7 /* full option count */, 4 /* user option count */,
    ocserv_full_usage, ocserv_short_usage,
    NULL, NULL,
    PKGDATADIR, ocserv_packager_info
};

#if ENABLE_NLS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <autoopts/usage-txt.h>

static char* AO_gettext(char const* pz);
static void  coerce_it(void** s);

/**
 * AutoGen specific wrapper function for gettext.
 * It relies on the macro _() to convert from English to the target
 * language, then strdup-duplicates the result string.
 *
 * @param[in] pz the input text used as a lookup key.
 * @returns the translated text (if there is one),
 *   or the original text (if not).
 */
static char *
AO_gettext(char const* pz)
{
    char* pzRes;
    if (pz == NULL)
        return NULL;
    pzRes = _(pz);
    if (pzRes == pz)
        return pzRes;
    pzRes = strdup(pzRes);
    if (pzRes == NULL) {
        fputs(_("No memory for duping translated strings\n"), stderr);
        exit(OCSERV_EXIT_FAILURE);
    }
    return pzRes;
}

static void coerce_it(void** s) { *s = AO_gettext(*s);
}

/**
 * Translate all the translatable strings in the ocservOptions
 * structure defined above.  This is done only once.
 */
static void
translate_option_strings(void)
{
    tOptions * const pOpt = &ocservOptions;

    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_usage_text.field_ct != 0) {
        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        tOptDesc * pOD = pOpt->pOptDesc;
        char **    ppz = (char**)(void*)&(option_usage_text);
        int        ix  = option_usage_text.field_ct;

        do {
            ppz++;
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);

        coerce_it((void*)&(pOpt->pzCopyright));
        coerce_it((void*)&(pOpt->pzCopyNotice));
        coerce_it((void*)&(pOpt->pzFullVersion));
        coerce_it((void*)&(pOpt->pzUsageTitle));
        coerce_it((void*)&(pOpt->pzExplain));
        coerce_it((void*)&(pOpt->pzDetail));
        coerce_it((void*)&(pOpt->pzPackager));
        coerce_it((void*)&(pOpt->pzShortUsage));
        option_usage_text.field_ct = 0;

        for (ix = pOpt->optCt; ix > 0; ix--, pOD++)
            coerce_it((void*)&(pOD->pzText));
    }

    if ((pOpt->fOptSet & OPTPROC_NXLAT_OPT_CFG) == 0) {
        tOptDesc * pOD = pOpt->pOptDesc;
        int        ix;

        for (ix = pOpt->optCt; ix > 0; ix--, pOD++) {
            coerce_it((void*)&(pOD->pz_Name));
            coerce_it((void*)&(pOD->pz_DisableName));
            coerce_it((void*)&(pOD->pz_DisablePfx));
        }
        /* prevent re-translation */
        ocservOptions.fOptSet |= OPTPROC_NXLAT_OPT_CFG | OPTPROC_NXLAT_OPT;
    }
}

#endif /* ENABLE_NLS */

#ifdef  __cplusplus
}
#endif
/* ocserv-args.c ends here */
