#                   Generated C-Service Makefile
#
#  commissionCalculator.mak:  DO NOT USE THIS FILE DIRECTLY.
#		This file has been generated for commissionCalculator; please 
#		create and/or augment Cservices.mak with the contents
#  		of this file. 
#
#  commissionCalculator.c:  DO NOT EXTEND THIS FILE.
#		Copy this file to commissionCalculatorImpl.c and customize in
#		order to prevent overwriting by subsequent code gens.
#
#  Cservices.mak:  CONSTRUCT AND MAKE THIS FILE.
#		Use this file to make the shared library for your interface
#		which will be loaded by the B2B server.
#
#  Environment Settings:  make sure you set JDKDIR and SERVDIR for 
#               your deployment.                         
#



#  Set these:
JDKDIR = C:\java\jdk1.1.7
SERVDIR = C:\SoftwareAG912\IntegrationServer\instances\default
#  Copy SRC value to Cservices.mak:
SRC = commissionCalculatorImpl.c

PKGDIR = $(SERVDIR)\packages\CT_Samplepackage
LIBSDIR = $(PKGDIR)\code\libs

all: install

install:  Cservices.dll
	if exist $(LIBSDIR)\CT_samplepackage_services_Cservices.dlx \
		del $(LIBSDIR)\CT_samplepackage_services_Cservices.dlx
	if exist $(LIBSDIR)\CT_samplepackage_services_Cservices.dll \
		rename $(LIBSDIR)\CT_samplepackage_services_Cservices.dll CT_samplepackage_services_Cservices.dlx
	copy Cservices.dll $(LIBSDIR)\CT_samplepackage_services_Cservices.dll

Cservices.dll: $(SRC)
	cl -DWIN32 -I$(JDKDIR)\include -I$(JDKDIR)\include\win32 \
		-I$(SERVDIR)\lib -I$(LIBSDIR) -LD $(SRC) \
		$(SERVDIR)\lib\wmJNI.lib -MT -FeCservices.dll

clean:
	del *.obj
	del *.exp
	del *.lib
	del Cservices.dll


