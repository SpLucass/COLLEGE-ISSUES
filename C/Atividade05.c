#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h> 
#include<string.h>
#include<locale.h>  

int main()
{
	int C, F;
	C=0;
    printf ("Digite a temperatura em celsius:");
    scanf ("%d", &C);

    F = (C*1.8) + 32;

    printf ("\n\n%d graus Celsius e equivalenta a %d graus Farenheits", C, F);

    return 0;
}
