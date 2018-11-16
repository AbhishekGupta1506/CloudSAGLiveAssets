#                   Generated C-Service Makefile
#
#  DSAFS.mak:  DO NOT USE THIS FILE DIRECTLY.
#		This file has been generated for DSAFS; please 
#		create and/or augment new_folder.mak with the contents
#  		of this file. 
#
#  DSAFS.c:  DO NOT EXTEND THIS FILE.
#		Copy this file to DSAFSImpl.c and customize in
#		order to prevent overwriting by subsequent code gens.
#
#  new_folder.mak:  CONSTRUCT AND MAKE THIS FILE.
#		Use this file to make the shared library for your interface
#		which will be loaded by the B2B server.
#
#  Environment Settings:  make sure you set JDKDIR and SERVDIR for 
#               your deployment.                         
#



#  Set these:
JDKDIR = C:\java\jdk1.1.7
SERVDIR = C:\SoftwareAG912\IntegrationServer\instances\default
#  Copy SRC value to new_folder.mak:
SRC = DSAFSImpl.c

PKGDIR = $(SERVDIR)\packages\CT_Samplepackage
LIBSDIR = $(PKGDIR)\code\libs

all: install

install:  new_folder.dll
	if exist $(LIBSDIR)\CT_samplepackage_services_Cservices_new_folder.dlx \
		del $(LIBSDIR)\CT_samplepackage_services_Cservices_new_folder.dlx
	if exist $(LIBSDIR)\CT_samplepackage_services_Cservices_new_folder.dll \
		rename $(LIBSDIR)\CT_samplepackage_services_Cservices_new_folder.dll CT_samplepackage_services_Cservices_new_folder.dlx
	copy new_folder.dll $(LIBSDIR)\CT_samplepackage_services_Cservices_new_folder.dll

new_folder.dll: $(SRC)
	cl -DWIN32 -I$(JDKDIR)\include -I$(JDKDIR)\include\win32 \
		-I$(SERVDIR)\lib -I$(LIBSDIR) -LD $(SRC) \
		$(SERVDIR)\lib\wmJNI.lib -MT -Fenew_folder.dll

clean:
	del *.obj
	del *.exp
	del *.lib
	del new_folder.dll


