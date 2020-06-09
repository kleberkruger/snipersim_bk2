# Install script for directory: /workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/cmake/inst/amd64-linux.gcc-sniper")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules/Platform" TYPE FILE FILES
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-ifort.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/MP-RAS.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-PGI-CXX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-como.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/IRIX64.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/SINIX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/cl.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Darwin-icc.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/RISCos.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/AIX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-wcl386.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-SunPro-Fortran.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/g77.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/QNX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-Intel-CXX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/BlueGeneL.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-ifort.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/UNIX_SV.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/BeOS.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/kFreeBSD.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/SunOS.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-PGI-Fortran.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/gas.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic-ADSP-C.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/HP-UX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Tru64.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-icl.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Xenix.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-gcc.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Darwin-icpc.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/xlf.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Darwin-xlc.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/CYGWIN-g77.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/DragonFly.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Darwin.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-PGI-C.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/OpenBSD.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-VisualAge-Fortran.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic-ADSP-ASM.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-SunPro-CXX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/IRIX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/SunOS-SunPro-Fortran.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/SCO_SV.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-VisualAge-C.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-g77.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-df.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/syllable.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-cl.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-g++.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic-SDCC-C.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/FreeBSD.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/UnixWare.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic-ADSP-Common.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/BSDOS.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/NetBSD.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/OSF1.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/CYGWIN.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-Intel-Fortran.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/UnixPaths.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-Intel-C.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/GNU.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic-ADSP-CXX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-SunPro-C.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/AIX-VisualAge-Fortran.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-bcc32.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/gcc.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-GNU-Fortran.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/eCos.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-icpc.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/WindowsPaths.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/ULTRIX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Catamount.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules/Platform" TYPE FILE FILES "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-cl.cmake.in")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

