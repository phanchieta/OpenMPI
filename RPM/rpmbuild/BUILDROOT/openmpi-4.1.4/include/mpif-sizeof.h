! -*- f90 -*-
! WARNING: This is a generated file!  Edits will be lost!
!
! Copyright (c) 2014 Cisco Systems, Inc.  All rights reserved.
! $COPYRIGHT$
!
! This file was generated by gen-mpi-sizeof.pl for all the MPI_SIZEOF
! interface possibilities for intrinsic types.  Once TS 29113 is
! supported in all compilers, we can simply have *one* procedure for
! each type and use dimension(..) to indicate scalars+all array ranks.
! But until more compilers support this, we simply generate a
! procedure for scalars and all possible ranks in an attempt to
! support lots of Fortran compilers.

! *** ATTENTION!
!
! Sad panda.
!
! This compiler does not support the Right Stuff to enable MPI_SIZEOF.
! Specifically: we need support for the INTERFACE keyword,
! ISO_FORTRAN_ENV, and the STORAGE_SIZE() intrinsic on all types.
! Apparently, this compiler does not support both of those things, so
! this file will be (effecitvely) blank (i.e., we didn't bother
! generating the necessary stuff for MPI_SIZEOF because the compiler
! doesn't support
! it).
!
! If you want support for MPI_SIZEOF, please use a different Fortran
! compiler to build Open MPI.

