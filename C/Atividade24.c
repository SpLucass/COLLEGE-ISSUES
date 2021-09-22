#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	char sexo;
	printf ("Digite o sexo:\nF-Feminino \nM-Masculino\n\nSexo: ");
	scanf ("%s", &sexo);

	while (sexo!='M' && sexo!='F')
	{
		printf ("\nInvalido!\nDigite o sexo:\nF-Feminino \nM-Masculino\n\nSexo: ", sexo);
		scanf ("%s", &sexo);	
	}
	
	if (sexo=='M')
	{
		printf ("\n\nVoce selecionou o sexo MASCULINO!");
	}
	else
	{
		printf ("\n\nVocê selecionou o sexo FEMININO!");
	}
}

