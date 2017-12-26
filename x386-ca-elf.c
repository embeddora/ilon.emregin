/*
 * Code to generate disassembly of memory dump (needed to initialize CPUs 
 * registers and peripherals bit-precisely like Vx-suff does)
 *
 * (C) Copyright 2013-2014, Embeddora Tech. LLC, info@embeddora.com
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */


#include <stdio.h>

#include <sys/stat.h>

//#define FNAME "vmlinux.bin"
#define FNAME "dump"

#define bswap(value) \
    (((unsigned long) (value)) << 24 |\
    (((unsigned long) (value)) & 0x0000FF00) << 8 |\
    (((unsigned long) (value)) & 0x00FF0000) >> 8 |\
    ((unsigned long) (value)) >> 24)

int main()
{             
FILE *fp;

unsigned long ulo;

struct stat fileStats;

int iSz = 0;



if (stat(FNAME, &fileStats) != 0) {

		printf("/* Can't stat file %s*/ \n", FNAME);

		return -2;

	}
	else {

		//.printf("\n/* It's a length of '%s' */\nunsigned long CodeLength = %d; \n", FNAME, iSz = fileStats.st_size);


    fp=fopen(FNAME,"r");



    if(fp==NULL)
    {
        printf("/* Some problem in opening the file %s*/ ", FNAME );

        return -1;
    } 
    else
    { 
	//.int i=0;
	unsigned long addr, ulo0, ulo1, ulo2, ulo3; 
	char c;

	printf("\n\n/* The memory which is dumped in file '%s' is the series of the following uns.longs */ \nconst unsigned long CodeArray[] = {\n", FNAME);

#if (0)
	for (i = 0; i <  iSz / sizeof (unsigned long)  ; i++)
        {
	    if (0 == i % 4) printf ("\n /* 0x%08x */", i* sizeof (unsigned long) ); 

	    fread(&ulo,  sizeof (unsigned long)  ,1 , fp);

            printf(" 0x%08x, ", bswap (ulo) );
        }
#else
	while ( !feof(fp) )
	{
		fscanf(fp, "%08lx: %08lx %08lx %08lx %08lx\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", &addr, &ulo0, &ulo1, &ulo2, &ulo3, 
&c, &c, &c, &c, &c, &c, &c, &c, &c, &c, &c, &c, &c, &c, &c, &c );

		printf(" /* %08lx: */\t\t0x%08lx, 0x%08lx, 0x%08lx, 0x%08lx,\n", addr, ulo0, ulo1, ulo2, ulo3);

		iSz+=4;

	}
#endif /* (0) */


	printf(" }; \n");

		printf("\n/* It's a length of dumped array stored in '%s' */\nunsigned long CodeLength = %d; \n", FNAME, iSz);

    }

    fclose(fp);

}
    return 0;  

}
