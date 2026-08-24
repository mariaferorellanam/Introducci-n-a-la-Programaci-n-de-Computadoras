#include <stdio.h>
#include <math.h>

int main()
{
   float calificaciones[5];
   float suma = 0, media;
   float mediana, moda;
   float rango, varianza = 0, desviacion;
   float temp;

   int i, j;
   int frecuencia, mayorFrecuencia = 0;
   int existeModa = 0;

   //El estudiante hace el ingreso de sus 5 calificaciones respectivas
    printf("\n");
    printf("Toma de Datos de Calificaciones de Estudiante");
    printf("\n");
    printf("----------------------------------------------");
    printf("\n");
    printf("Ingrese sus 5 calificaciones para la toma de Calculos");
    printf("\n");

    for (i = 0; i < 5; i++)
    {
          printf("\n");
          printf("Calificacion %d: ", i + 1);
          scanf("%f", &calificaciones[i]);
          printf("\n");
          suma = suma + calificaciones[i];

     }

    // Realizar el calculo de la media

    media = suma / 5;

    //Organizar las calificaciones de la mas baja a la mas alta

      for (i = 0; i < 4; i++)
      {
        for (j = i + 1; j < 5; j++)
        {
          if (calificaciones[i] > calificaciones[j])
           {
             temp = calificaciones[i];
             calificaciones[i] = calificaciones[j];
             calificaciones[j] = temp;
            }
       }
 }

      //Realizar el calculo de la mediana
     mediana = calificaciones[2];

     //Realizar el calculo del rango
     rango = calificaciones[4] - calificaciones[0];

     //Realizar el caculo de la moda
     for (i = 0; i < 5; i++)
       {
          frecuencia = 0;

          for (j = 0; j < 5; j++)
            {
               if (calificaciones[i] == calificaciones[j])
                   {
                       frecuencia++;
                    }
            }

            if (frecuencia > mayorFrecuencia)
             {
               mayorFrecuencia = frecuencia;
               moda = calificaciones[i];
           }
        }

        if (mayorFrecuencia > 1)
            {
            existeModa = 1;
          }

     //Realizar calculo de la varianza
        for (i = 0; i < 5; i++)
           {
              varianza = varianza + pow(calificaciones[i] - media, 2);
           }

         varianza = varianza / 5;

         // Realizar calculo de la desviacion estandar
           desviacion = sqrt(varianza);

           //Mostrar resultados al estudiante
          printf("Resultados de los Calculos Realizados");


          printf("\n");
          printf("Media: %.2f\n", media);
          printf("Mediana: %.2f\n", mediana);

          if (existeModa == 1)
           {
             printf("Moda: %.2f\n", moda);
            }
          else
          {
             printf("Moda: No hay existencia de una moda.\n");
           }

          printf("Rango: %.2f\n", rango);
          printf("Varianza: %.2f\n", varianza);
          printf("Desviacion Estandar: %.2f\n", desviacion);

    return 0;
}


