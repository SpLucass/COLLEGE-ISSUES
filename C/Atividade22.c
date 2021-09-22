#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int num;
    printf ("Insira um numero positivo:");
    scanf ("%d", &num);

	while (num<=0)
	{
		printf ("Invalido! Insira um numero positivo:");
    	scanf ("%d", &num);
	}	

    printf ("\n\nVoce digitou o numero positivo: %d",num);

    return 0;
}
