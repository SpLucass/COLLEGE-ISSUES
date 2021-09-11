#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int P1, P2, media;
	printf ("Nota P1:");
	scanf ("%d", &P1);
	
	printf ("\nNota P2:");
	scanf ("%d", &P2);
	
	media=((P1+(2*P2))/3);
	
	printf ("\n\nO Aluno teve media %d", media);
	
	if(media<5)
	{
		printf ("\n\nO aluno foi reprovado");
	}
	else
	{
		printf ("\n\nO aluno foi aprovado");
	}
}
