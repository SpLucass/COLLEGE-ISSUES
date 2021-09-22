#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int num,mult,i;
    printf ("Insira um numero positivo:");
    scanf ("%d", &num);

	while (num<=0)
	{
		printf ("Invalido! Insira um numero positivo:");
    	scanf ("%d", &num);
	}	

    printf ("\n\nVoce digitou o numero positivo %d e sua tabuada e:\n\n",num);
	
		for (i=0; i<=10; i++)
	{
		mult=num*i;
		printf ("%d * %d = %d\n",num,i,mult);
	}	
    return 0;
}
