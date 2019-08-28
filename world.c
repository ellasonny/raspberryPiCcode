/*
Copyright (c) 2012, Broadcom Europe Ltd



*/

// Classic Hello World

#include <stdio.h>

void forList(void) {
// body of my function 
      printf("Hello phworld  25 !\n");
      int cvl;
      for (cvl=1; cvl<10; cvl=cvl+3)
      { 
		  printf("   %d ",cvl);
	 }
	  printf("\n");
	  printf("\n");
}



int main(void)
{
	
	int cv;
	
	forList();
		forList();	forList();
	
for (cv=90; cv<=150; cv=cv+15)
	   printf("Hello PDB world!   %d \n",cv);


  /* printf("Hello world!\n");
      printf("Hello phworld!\n");
       printf("Hello world!\n");
      printf("Hello phworld!\n");
      */ 
   return 3;
}




