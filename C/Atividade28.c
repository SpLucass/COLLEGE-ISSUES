#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int num, mult,i,n;
    num=0;
	
	for (n=0; n<=19; n++)
	{
		num=num+1;
		getch();
		printf ("A tabuada de %d e:\n",num);
		for (i=0; i<=10; i++)
		{
			mult=num*i;
			printf ("%d * %d = %d\n",num,i,mult);
		}
		printf ("\n\n");
	}

    return 0;
}
