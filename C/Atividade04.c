#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int a, b, c, d, media;
    printf ("Digite 4 numeros:\n");
    scanf ("%d", &a);
    scanf (" %d",&b);
    scanf (" %d", &c);
    scanf (" %d", &d);

    media = (a * b * c * d) / 4;

    printf ("\n\nA media aritmetica dos numeros %d, %d, %d e %d e igual a %d", a, b, c, d, media);

    return 0;
}
