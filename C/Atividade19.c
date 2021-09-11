#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	float acel, Vini, tempo, max, conv;
	
	printf ("Aceleracao(m/s2):");
    scanf ("%f", &acel);
	
    printf ("\n\nVelocidade Inicial(m/s):");
    scanf ("%f", &Vini);
	    
    printf ("\n\nTempo(s):");
    scanf ("%f", &tempo);
    
    max=(Vini+(acel*tempo));
    conv= max/3.6; 
	printf ("\n\nO carro esta a uma velocidade de %.2f Km/h", conv);
	
	if (conv<120)
	{
		if (conv<40)
		{
			printf ("\n\nVeiculo muito lento");
		}
		else
		{
			if (conv>80)
			{
				printf ("\n\nVeiculo rapido");	
			}
			else
			{
				if (conv>60)
				{
						printf ("\n\nVelocidade de Cruzeiro");
				}
				else 
				{
						printf ("\n\nVelocidade Permitida");
				}
			}
		}
	}
	else
	{
		printf ("\n\nVeiculo muito rapido");
	}
	
    return 0;
}
