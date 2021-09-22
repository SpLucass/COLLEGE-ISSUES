#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int num, mult,i;
    num=5;
	
	printf ("A tabuada do 5 e:\n\n");
	
	for (i=0; i<=10; i++)
	{
		mult=5*i;
		printf ("5 * %d = %d\n",i,mult);
	}	
    return 0;
}
