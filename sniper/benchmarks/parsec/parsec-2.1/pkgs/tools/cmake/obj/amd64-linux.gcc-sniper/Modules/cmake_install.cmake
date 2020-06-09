# Install script for directory: /workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindHTMLHelp.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CTestTargets.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgGA.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestJavaCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeGenericSystem.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLATEX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForSTDNamespace.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineRCCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineCompilerId.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFindXCode.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindwxWidgets.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseQt4.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeRCInformation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPerlLibs.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgTerrain.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/VTKCompatibility.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPHP4.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindQt4.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCABLE.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckFortranFunctionExists.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckLibraryExists.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Dart.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindAVIFile.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGIF.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindOpenGL.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgUtil.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCXXSourceCompiles.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFortranInformation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLibXml2.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindBLAS.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindDart.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeUnixFindMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgSim.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeJavaInformation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGnuplot.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindFLTK.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindProducer.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS7FindMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMPEG.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineASM-ATTCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGLU.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCXXCompilerFlag.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindwxWindows.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestCXXCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindTCL.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgParticle.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindJasper.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/SystemInformation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindHSPELL.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL_sound.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindOpenSSL.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCups.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeForceCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCURL.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineJavaCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineCompilerABI.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindDoxygen.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCXXSourceRuns.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindRuby.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindQt.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeASMInformation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindOpenAL.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckTypeSize.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestRCCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGTK.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindJPEG.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLibXslt.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeImportBuildSettings.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindBoost.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestBigEndian.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FLTKCompatibility.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Findosg.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/InstallRequiredSystemLibraries.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgShadow.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS71FindMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakePrintSystemInformation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckIncludeFile.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindImageMagick.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineASMCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseVTK40.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS9FindMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeASM-ATTInformation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPackageHandleStandardArgs.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDependentOption.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSelfPackers.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPackZIP.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindWget.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPike.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UsewxWidgets.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSubversion.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgText.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindTIFF.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindBZip2.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindQt3.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineCCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCygwin.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFindFrameworks.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCXXInformation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgViewer.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindJava.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseVTKConfig40.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFindWMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGCCXML.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineFortranCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/GetPrerequisites.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindFreetype.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCommonLanguageInclude.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL_net.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForANSIForScope.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/ITKCompatibility.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindQuickTime.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMPI.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPackDeb.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindKDE4.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgFX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindVTK.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckIncludeFileCXX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL_image.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestCCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindUnixCommands.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckSymbolExists.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPerl.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGLUT.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestFortranCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSWIG.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/AddFileDependencies.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindDCMTK.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgProducer.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgManipulator.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMFC.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS6BackwardCompatibility.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeBorlandFindMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckStructHasMember.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCSourceCompiles.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeBackwardCompatibilityCXX.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindOpenThreads.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckSizeOf.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPythonInterp.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestASMCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMPEG2.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseSWIG.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UsePkgConfig.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPhysFS.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindWish.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL_ttf.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/MacroAddFileDependencies.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeSystemSpecificInformation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckIncludeFiles.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLua51.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForANSIStreamHeaders.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS8FindMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckFunctionExists.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindASPELL.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindTclStub.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindJNI.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindEXPAT.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Use_wxWindows.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCInformation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Documentation.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/ecos_clean.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS6FindMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CTest.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGettext.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPythonLibs.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindTclsh.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindITK.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFindBinUtils.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindZLIB.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindXMLRPC.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeMSYSFindMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCSourceRuns.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPkgConfig.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineCXXCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgIntrospection.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLAPACK.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCCompilerFlag.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL_mixer.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestASM-ATTCompiler.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindFLTK2.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeBackwardCompatibilityC.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckVariableExists.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeMinGWFindMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindX11.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPackageMessage.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForSSTREAM.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMatlab.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestCXXAcceptsFlag.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgDB.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/kde3uic.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseEcos.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseVTKBuildSettings40.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FeatureSummary.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeNMakeFindMake.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPNG.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeExportBuildSettings.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMotif.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGDAL.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineSystem.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindKDE3.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/KDE3Macros.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPackRPM.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindThreads.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLua50.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCVS.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCurses.cmake"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS7BackwardCompatibility.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCXXCompilerABI.cpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/DummyCXXFile.cxx"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForSSTREAM.cxx"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForANSIStreamHeaders.cxx"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestForFreeVC.cxx"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForSTDNamespace.cxx"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForAnsiForScope.cxx"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.Info.plist.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeConfigurableFile.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.OSXScriptLauncher.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/NSIS.InstallOptions.ini.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeSystem.cmake.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCCompilerId.c.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/DartConfiguration.tcl.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.RuntimeScript.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/MacOSXBundleInfo.plist.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckTypeSizeC.c.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/SystemInformation.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckIncludeFile.cxx.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckIncludeFile.c.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/kde3init_dummy.cpp.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.background.png.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/NSIS.template.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCCompiler.cmake.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakePlatformId.h.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeASMCompiler.cmake.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFortranCompilerId.F90.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.Description.plist.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckLibraryExists.lists.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.distribution.dist.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCXXCompiler.cmake.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestEndianess.c.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeBuildSettings.cmake.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.STGZ_Header.sh.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.DS_Store.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.OSXX11.Info.plist.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeRCCompiler.cmake.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.VolumeIcon.icns.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFortranCompiler.cmake.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeJavaCompiler.cmake.in"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCXXCompilerId.cpp.in"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckForPthreads.c"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckFunctionExists.c"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestGNU.c"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckVariableExists.c"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCCompilerABI.c"
    "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestNMakeCLVersion.c"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCompilerABI.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES "/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/readme.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/workspaces/sniper/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Modules/Platform/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

