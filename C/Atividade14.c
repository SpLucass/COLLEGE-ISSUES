#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int valor1, valor2, valor3;
	printf ("Digite um valor:");
	scanf ("%d", &valor1);
	
	printf ("\nDigite outro valor:");
	scanf ("%d", &valor2);
	
	printf ("\nDigite outro valor:");
	scanf ("%d", &valor3);
	
	if (valor1>valor2)
	{
		if (valor1>valor3)
		{
			printf ("\n\nEntre os tres valores selecionados, o maior e %d", valor1);
		}
		else
		{
			printf ("\n\nEntre os tres valores selecionados, o maior e %d", valor3);
		}
	}
	
	else
	{
		if (valor2>valor3)
			{
			printf ("\n\nEntre os tres valores selecionados, o maior e %d", valor2);
			}
		else
			{
			printf ("\n\nEntre os tres valores selecionados, o maior e %d", valor3);
			}
	}

}
