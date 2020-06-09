# Install script for directory: /workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Templates" TYPE FILE FILES
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/CPackConfig.cmake.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/cygwin-package.sh.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/TestDriver.cxx.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/CTestScript.cmake.in"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Templates" TYPE FILE FILES
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/CPack.GenericWelcome.txt"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/CMakeLists.txt"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/CPack.GenericDescription.txt"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/CPack.GenericLicense.txt"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Templates" TYPE FILE FILES "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/CMakeVisualStudio6Configurations.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Templates" TYPE FILE FILES
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/DLLHeader.dsptemplate"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/DLLFooter.dsptemplate"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/EXEWinHeader.dsptemplate"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/UtilityHeader.dsptemplate"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/EXEFooter.dsptemplate"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/staticLibHeader.dsptemplate"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/EXEHeader.dsptemplate"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/UtilityFooter.dsptemplate"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/staticLibFooter.dsptemplate"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Templates" TYPE FILE FILES
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/CMakeVSMacros2.vsmacros"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Templates/CMakeVSMacros1.vsmacros"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

