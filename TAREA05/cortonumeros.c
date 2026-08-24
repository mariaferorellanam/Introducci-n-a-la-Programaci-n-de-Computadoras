#include <stdio.h>

int main()
{
int numero, i;
int esPrimo = 1;

// Se solicita ingresar el numero al Usario
printf("\n");
printf("Usuario, por favor, ingrese un numero entero:");
scanf("%d", &numero);

// Se verifica que el numero sea menor que 2
if (numero < 2)
{
printf("El numero ingresado no es compuesto ni primo.\n");
}
else
{
//  Se comprueban todos los posibles divisores
for (i = 2; i < numero; i++)
{
if (numero % i == 0)
{
esPrimo = 0;
break;
}
}

//Se muestra el Resultado
if (esPrimo == 1)
{
printf("\n");
printf("El numero %d es primo.\n", numero);
printf("\n");
}
else
{
printf("\n");
printf("El numero %d es compuesto.\n", numero);
printf("\n");
}
}
return 0;
}
