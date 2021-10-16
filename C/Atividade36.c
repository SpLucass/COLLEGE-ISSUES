#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main(int argc, char *argv[], int i, int mult, int a)
{
  // Declarando e populando o vetor com 10 posições
  
  // Declarando o vetor com 5 posições
  	int numeros[20];
	int numeros2[20];
  // Looping para popular o vetor
  printf("Digite os 20 numeros:\n");
  
  for(i=0; i<20; i++)
 	 {
    scanf("%i", &numeros[i]);
	 }
 	
  // Looping para exibir os valores do vetor
  printf("\n\nOs numeros digitados foram:\n");
  for(i=0; i<20; i++)
  {
      printf("%i; ", numeros[i]);
  }
  
  	printf("\n\nDigite o fator multiplicativo:");
	scanf("%i", &mult);
	
  for(i=0; i<20; i++)
 	 {
    	numeros2[i]=numeros[i]*mult ;
	 }
	 
	printf("\n\nO vetor multiplicado e:\n\n");	 
  	for(i=0; i<20; i++)	 
		{
     		printf("%i; ", numeros2[i]);
  		}
 
  return 0;
}

