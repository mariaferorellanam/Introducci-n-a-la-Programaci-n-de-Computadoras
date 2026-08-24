#include <stdio.h>

int main()
{
   float precioTotal, precioSinIVA, iva;

   //Se le solicita al Usuario el Precio total
   printf("\n");
   printf("Realice sus calculos del IVA");
   printf("\n");
   printf("Por favor, ingrese el precio total en Quetzales Q: ");
   scanf("%f", &precioTotal);

   //Realizar el calculo del precio sin IVA
   precioSinIVA = precioTotal / 1.12;

   //Realizar el calculo del IVA
   iva = precioTotal - precioSinIVA;

   //Mostrar los resultados al Usuario
   printf("\n");
   printf("Resultados de Calculos del IVA:");
   printf("\n");
   printf("Precio Total: Q%.2F\n", precioTotal);
   printf("\n");
   printf("Precio sin IVA: Q%.2f\n", precioSinIVA);
   printf("\n");
   printf("IVA (12%%): Q%.2f\n", iva);
   printf("\n");

return 0;
}
