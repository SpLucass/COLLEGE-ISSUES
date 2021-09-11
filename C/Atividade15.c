#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	float altura, peso, IMC;
    printf ("Altura em metros:");
    scanf ("%f", &altura);
    
    printf ("\n\nPeso em kg:");
    scanf ("%f", &peso);

    IMC = peso/(altura*altura);

    printf ("\n\nO Indice de Massa Corporal (IMC) de uma pessoa com %.2f kg e %.2f metros de    altura e de %.2f", peso, altura, IMC);
    
    if (IMC<20)
    {
    	printf ("\n\nEsta pessoa esta abaixo do peso");
	}
	else 
	{
		if (IMC>25)
		{
			printf ("\n\nEsta pessoa esta acima do peso");
		}
		else
		{
			printf ("\n\nEsta pessoa esta no peso ideal");
		}
	}

    return 0;
}
