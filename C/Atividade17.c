#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int a, b, c, v1, v2, v3;
	printf ("Digite um valor:");
	scanf ("%d", &a);
	
	printf ("\nDigite outro valor:");
	scanf ("%d", &b);
	
	printf ("\nDigite outro valor:");
	scanf ("%d", &c);
	
	v1=(a*a);
	v2=(b*b);
	v3=(c*c);
	
	if (a>0 && b>0 && c>0)
	{
		if (a<b+c && b<a+b && c<a+b)
		{
			if ((v1==v2+v3) || (v3==v2+v1) || (v2==v1+v3))
			{
				printf ("\n\nTrata-se de um Triangulo Retangulo.");	
			}
			else
			{
			printf ("\n\nTrata-se de um triangulo, porem nao e um Triangulo Retangulo.");
			}
		}
		else
		{
			printf ("\n\nOs valores inseridos nao sao medidas de um triangulo!");
		}
	}


}
