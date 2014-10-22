# makefile
# Created by IBM WorkFrame/2 MakeMake at 12:38:33 on 2 Feb 1996
#
# The actions included in this make file are:
#  Compile::C++ Compiler
#  Link::Linker
#  Bind::Resource Bind
#  Compile::Resource Precompile
#  Compile::Resource Compiler

.SUFFIXES: .cpp .obj .rc .rcx .res 

.all: \
    .\target.exe

.cpp.obj:
    @echo " Compile::C++ Compiler "
    icc.exe -DIC_TRACE_DEVELOP /Ti /Gm /Gd /C %s

.rcx.rc:
    @echo " Compile::Resource Precompile "
    icc.exe -c /Pc+ /Pe+ /Pd /I. %s > %|dpfF.rc

.rc.res:
    @echo " Compile::Resource Compiler "
    rc.exe -r %s .\%|fF.RES

.\target.exe: \
    .\test.obj \
    .\vbmain.obj \
    .\PgHndler.obj \
    .\test.res
    @echo " Link::Linker "
    @echo " Bind::Resource Bind "
    icc.exe @<<
    -DIC_TRACE_DEVELOP 
     /Tdp 
     /Gm /Gd 
     /B" /de /st:64000 /pmtype:pm"
     /Fetarget.exe 
     .\test.obj
     .\vbmain.obj
     .\PgHndler.obj
<<
    rc.exe .\test.res target.exe

.\test.obj: \
    F:\toydev\pagehdl\test.cpp \
    {F:\toydev\pagehdl;$(INCLUDE);}test.hpp \
    {F:\toydev\pagehdl;$(INCLUDE);}test.h \
    {F:\toydev\pagehdl;$(INCLUDE);}PgHndler.hpp \
    {F:\toydev\pagehdl;$(INCLUDE);}PgHndler.h \
    {F:\toydev\pagehdl;$(INCLUDE);}PgHndler.hpv

.\PgHndler.obj: \
    F:\toydev\pagehdl\PgHndler.cpp \
    {F:\toydev\pagehdl;$(INCLUDE);}PgHndler.hpp \
    {F:\toydev\pagehdl;$(INCLUDE);}PgHndler.cpv \
    {F:\toydev\pagehdl;$(INCLUDE);}PgHndler.h \
    {F:\toydev\pagehdl;$(INCLUDE);}PgHndler.hpv

.\vbmain.obj: \
    F:\toydev\pagehdl\vbmain.cpp \
    {F:\toydev\pagehdl;$(INCLUDE);}test.hpp \
    {F:\toydev\pagehdl;$(INCLUDE);}test.h

.\test.rc: \
    F:\toydev\pagehdl\test.rcx \
    {$(INCLUDE)}test.rci

.\test.res: \
    .\test.rc
