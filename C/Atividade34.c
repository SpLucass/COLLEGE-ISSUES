#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main(int argc, char *argv[], int i, int a){
  // Declarando e populando o vetor com 10 posi��es
  
  // Declarando o vetor com 5 posi��es
  int numeros[10];
  
  
  // Looping para popular o vetor
  printf("Digite os 10 numeros:\n");
  
  for(i=0; i<10; i++)
  {
    scanf("%i", &numeros[i]);
    if (numeros[i]>a)
    {
    	a=numeros[i];
	}
  }
 
 	a=0;
 	
  // Looping para exibir os valores do vetor
  printf("\n\nOs numeros digitados foram:\n");
  for(i=9; i>=0; i--)
  {
      printf("%i \n", numeros[i]);
  }
  printf("\n\nO maior numero e: %i", a);  
 
  return 0;
}

