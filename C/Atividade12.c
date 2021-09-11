#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int base, altura, area;
    printf ("Base:");
    scanf ("%d", &base);

    printf ("\nAltura:");
    scanf ("%d", &altura);

    area = base * altura;

    printf ("\n\nUm retangulo de base %d e altura %d possui area de %d", base, altura, area);
    
    if (area>100)
    {
    printf ("\n\nTERRENO GRANDE");
	}

    return 0;
}
