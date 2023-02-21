/*
 * Copyright (c) 2004-2005 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2005 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart,
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * Copyright (c) 2011 Cisco Systems, Inc.  All rights reserved.
 * Copyright (c) 2016      Research Organization for Information Science
 *                         and Technology (RIST). All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 *
 * This file should be included by any file that needs full
 * version information for the OPAL project
 */

#ifndef OPAL_VERSIONS_H
#define OPAL_VERSIONS_H

#define OPAL_MAJOR_VERSION 4
#define OPAL_MINOR_VERSION 1
#define OPAL_RELEASE_VERSION 4
#define OPAL_GREEK_VERSION ""
#define OPAL_WANT_REPO_REV @OPAL_WANT_REPO_REV@
#define OPAL_REPO_REV "v4.1.4"
#ifdef OPAL_VERSION
/* If we included version.h, we want the real version, not the
   stripped (no-r number) verstion */
#undef OPAL_VERSION
#endif
#define OPAL_VERSION "4.1.4"
#define OPAL_CONFIGURE_CLI " \'--build=x86_64-redhat-linux-gnu\' \'--host=x86_64-redhat-linux-gnu\' \'--program-prefix=\' \'--disable-dependency-tracking\' \'--prefix=/usr\' \'--exec-prefix=/usr\' \'--bindir=/usr/bin\' \'--sbindir=/usr/sbin\' \'--sysconfdir=/etc\' \'--datadir=/usr/share\' \'--includedir=/usr/include\' \'--libdir=/usr/lib64\' \'--libexecdir=/usr/libexec\' \'--localstatedir=/var\' \'--sharedstatedir=/var/lib\' \'--mandir=/usr/share/man\' \'--infodir=/usr/share/info\' \'--prefix=/users/jarbas/rpmbuild/BUILD\' \'--with-verbs\' \'--with-ucx\'"

#endif
