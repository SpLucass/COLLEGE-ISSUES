#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int n,soma,i;
	
	n=0;
		
	for (i=0; i<=100; i++)
	{
		n=n+i;
	}	
	printf ("A soma dos inteiros de 1 a 100 e: %d",n);
    return 0;
}
