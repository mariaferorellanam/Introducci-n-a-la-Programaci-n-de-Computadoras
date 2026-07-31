#include <stdio.h>
#include <stdlib.h>

/*
Se calcula el area de un circulo, el cual su radio equivale a 8.9 centimetros. Tome pi como = 3.14
*/

int main () {
double pi = 3.14;
double radio = 8.9;
double area = pi * radio * radio;

system("clear");
printf("\n");
printf("El valor del area del circulo es de: %lf \n", area);
printf("\n");
return 0;
}
