#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	float a, b, c, d, e, soma, pago, troco;
    printf ("Digite o preco dos produtos");
    printf ("\n\nProduto 1:");
    scanf ("%f", &a);
    printf ("\nProduto 2:");
    scanf ("%f", &b);
    printf ("\nProduto 3:");
    scanf ("%f", &c);
    printf ("\nProduto 4:");
    scanf ("%f", &d);
    printf ("\nProduto 5:");
    scanf ("%f", &e);

    soma = a+b+c+d+e;
    
    printf ("\n\nValor pago:");
    scanf ("%f", &pago);
    
    

	troco = pago - soma;
	printf ("\n\nO total foi de %.2f reais e foi pago um valor de %.2f reais.", soma, pago);
    printf ("\nO troco do cliente sera de %.2f reais", troco);

    return 0;
}
