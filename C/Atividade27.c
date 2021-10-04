#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int num,mult,i,A,B;
    printf ("Insira um numero positivo:");
    scanf ("%d", &num);

	while (num<=0)
	{
		printf ("Invalido! Insira um numero positivo:");
    	scanf ("%d", &num);
	}	

    printf ("\n\nVoce digitou o numero positivo %d",num);
    
    
	printf ("\n\nDigite o intervalo da multiplicacao:\n");
	printf ("Digite o primeiro valor: ");
	scanf ("%d", &A);
	
	printf ("\nDigite um valor maior que %d: ",A);
	scanf ("%d", &B);
	
	while (A>=B)
	{
		printf ("\nInvalido! Digite um numero maior que %d!: ", A);
		scanf ("%d", &B);	
	}
	
	printf ("\n\nO intervalo da mutiplicacao decrescente de %d num intervalo de %d a %d e:\n\n",num, B, A);
	
	for (i=B;i>=A; i--)
	{
		mult=num*i;
		printf ("%d * %d = %d\n",num,i,mult);
	}	
    return 0;
}
