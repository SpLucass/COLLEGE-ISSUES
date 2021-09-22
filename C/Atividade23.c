#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int valor1, valor2;
	printf ("Digite um valor: ");
	scanf ("%d", &valor1);
	
	printf ("\nDigite um valor maior que %d: ",valor1);
	scanf ("%d", &valor2);
	
	while (valor1>=valor2)
	{
		printf ("\nInvalido! Digite um numero maior que %d!: ", valor1);
		scanf ("%d", &valor2);	
	}
	
	printf ("\n\nCorreto! %d e maior que %d!", valor2, valor1);
}

