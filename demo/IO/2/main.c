/********************************************************************
* $ID: main.c               Mon 2016-09-19 14:55:18 +0800  lz       *
*                                                                   *
* Description:                                                      *
*                                                                   *
* Maintainer:  (lizhu)  <lizhu@zhytek.com>                 *
*                                                                   *
* CopyRight (c) 2016 ZHYTEK                                         *
*   All rights reserved.                                            *
*                                                                   *
* This file is free software;                                       *
*   you are free to modify and/or redistribute it                   *
*   under the terms of the GNU General Public Licence (GPL).        *
*                                                                   *
* Last modified:                                                    *
*                                                                   *
* No warranty, no liability, use this at your own risk!             *
********************************************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
	int fd, fd_cp, rdlen =0, rdlen_cp = 0;

	const char *fname = "version.txt";
	const char *nname = "version_cp.txt";

	if((fd = open(fname, O_RDONLY, NULL)) < 0)
	{
		perror("open error\n");
		return 0;
	}

	if((fd_cp = open(nname, O_RDONLY, NULL)) < 0)
	{
		perror("open error nname \n");
		return 0;
	}

		
	
}



/********************* End Of File: main.c *********************/
