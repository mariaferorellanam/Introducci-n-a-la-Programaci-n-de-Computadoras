#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int dado1, dado2, suma;
   int continuar = 1;

// Dar lugar a la suma de los numeros de forma aleatoria
srand(time(NULL));

while (continuar == 1)
{

   //Realizar el lanzamiento de dados
   dado1 = rand() % 6 + 1;
   dado2 = rand() % 6 + 1;

   //Realizar el calculo de la suma
   suma = dado1 + dado2;

   /// Hacer ver los resultados
   printf("\n");
   printf("\nDado1 : %d\n", dado1);
   printf("\n");
   printf("Dado 2: %d\n", dado2);
   printf("\n");
   printf("Suma de dados: %d\n", suma);

   //Hacer la verificacion del resultado
   if (suma == 8)
  {
     printf("\n");
     printf("Has ganado. La suma ha sido de 8.\n");
     continuar = 0;
   }
   else if (suma == 7)
   {
     printf("\n");
     printf("Has perdido. La suma ha sido de 7.\n");
     continuar = 0;
   }
   else
   {
     printf("La suma no fue de 7 ni de 8.\n");
     printf("\n");
     printf("Si desea volver a lanzar, seleccione las siguientes opciones:\n");
     printf("\n");
     printf("1 = Si\n");
     printf("\n");
     printf("0 = No\n");
     printf("\n");
     printf("Opcion Elegida: ");
     scanf("%d", &continuar);
     }
   }

   printf("\n");
   printf("Finalizacion del Juego. \n");

   return 0;

}
