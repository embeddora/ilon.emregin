#
# Makefile for Ebeddora Register Initializer (emregin v0.99)
#
# (C) Copyright 2013-2014, Embeddora Tech. LLC, info@embeddora.com
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 2 of
# the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston,
# MA 02111-1307 USA
#

CFLAGS		=            -march=mips1

ASMFLAGS	=

all: iLonSystem iLonSystem.odf

iLonSystem.odf:  iLonSystem
	mips-sdl-elf-objdump.exe    -D          --section-headers  	iLonSystem > iLonSystem.odf	
#obsolete	mips-sdl-elf-objdump.exe    -D -a -f -p -x -d -S -g         --section-headers  	emregin > emregin.odf	

#CodeArray.c: x386-elf-ca.exe
#	./x386-elf-ca.exe >CodeArray.c 

emregin.c: x386-ca-elf.exe dump
	./x386-ca-elf.exe >emregin.c

emregin.o: emregin.c
	mips-sdl-elf-gcc.exe $(CFLAGS) -c emregin.c  -o emregin.o 

#constants.o: constants.c 
#	mips-sdl-elf-gcc.exe $(CFLAGS) -c constants.c  -o constants.o 

emregin:	  emregin.o 
	mips-sdl-elf-ld.exe    emregin.o  -o 	emregin  --entry=CodeArray -Temregin.ld   

emregin.odf: emregin
	#mips-sdl-elf-objdump.exe    -D -a -f -p -x -d -S -g         --section-headers  	emregin > emregin.odf	
	mips-sdl-elf-objdump.exe     -D -t 	emregin > emregin.odf	  

x386-ca-elf.exe: x386-ca-elf.c
	gcc x386-ca-elf.c -o x386-ca-elf.exe





clean:
	rm -f  *.exe *.map     *.o  *.odf     emregin


