#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int a, b, c;
	printf ("Digite um valor:");
	scanf ("%d", &a);
	
	printf ("\nDigite outro valor:");
	scanf ("%d", &b);
	
	printf ("\nDigite outro valor:");
	scanf ("%d", &c);
	
	if (a>0 && b>0 && c>0)
	{
		if (a<b+c && b<a+b && c<a+b)
		{
			if ((a==b) && (b==c))
			{
				printf ("\n\nOs valores inseridos sao medidas de um triangulo EQUILATERO");
			}
			else if ((a!=b) && (b!=c))				// else if é utilizado quando o if terá mais de uma resposta else
			{
				printf ("\n\nOs valores inseridos sao medidas de um triangulo ESCALENO");
			}
			else
			{
				printf ("\n\nOs valores inseridos sao medidas de um triangulo ISOSCELES");
			}
		}
		else
		{
			printf ("\n\nOs valores inseridos nao sao medidas de um triangulo!");
		}
	}


}
