#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int aresta, area;
    printf ("Aresta do quadrado:");
    scanf ("%d", &aresta);

    area = aresta*aresta;

    printf ("\n\nA area do quadrado e de %d", area);

    return 0;
}
