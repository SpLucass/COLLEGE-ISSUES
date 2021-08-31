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
	printf ("Digite um valor:");
	scanf ("%d", &valor1);
	
	printf ("\nDigite outro valor:");
	scanf ("%d", &valor2);
	
	if (valor1>valor2)
	{
		printf ("\n\nEntre os dois valores selecionados, o menor e %d", valor2);
	}
	
	if (valor1<valor2)
	{
		printf ("\n\nEntre os dois valores selecionados, o menor e %d", valor1);
	}

	if (valor1==valor2)
	{
		printf ("\n\nOs valores sao equivalentes");
	}
}
