/*
Copyright (c) 2012, Broadcom Europe Ltd
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the copyright holder nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.


*/

// Classic Hello World

#include <stdio.h>


int main(void)
{
	
	int cv;
for (cv=0; cv<8; cv++){
	   printf("Hello PDB world!   %d \n",cv);
}

  /* printf("Hello world!\n");
      printf("Hello phworld!\n");
       printf("Hello world!\n");
      printf("Hello phworld!\n");
      */ 
   return 0;
}



