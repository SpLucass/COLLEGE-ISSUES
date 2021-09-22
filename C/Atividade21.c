#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	float P1, P2;
	printf ("Nota P1:");
	scanf ("%f", &P1);

	P2= (15-P1)/2;
	
	printf ("\n\nO Aluno precisa de nota %.2f na P2 para passar!",P2);

}
