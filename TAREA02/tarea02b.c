#include <stdio.h>
#include <stdlib.h>

/*
Calcule el area de un circulo cuyo radio es de 8.9 centimetros. Tome pi como 3.14
*/

int main() {
double pi = 3.14;
double radius = 8.9; //debe ser double
double area = pi * radius * radius;

system("clear");
printf("El valor del Area es %lf \n", area);
return 0;
}

