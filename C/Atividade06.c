#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	float cot, d, r;
    printf ("Cotacao do dolar:");
    scanf ("%f", &cot);
    printf ("\nQuantidade de Dolares:");
    scanf ("%f", &d);

    r = (d*cot);

    printf ("\n\n%.2f dolares e equivalenta a %.2f reais", d, r);

    return 0;
}
