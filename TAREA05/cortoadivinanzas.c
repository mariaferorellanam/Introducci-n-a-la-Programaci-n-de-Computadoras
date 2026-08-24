#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int opcion;
int puntos;
int i;
char nombre[50];
char respuesta[50];

FILE *archivo;

do
{
printf("\n");
printf("Bienvenido al Juego de las Adivinanzas.");
printf("\n");
printf("1. Jugar a las adivinanzas\n");
printf("\n");
printf("2. Ver el historia de los jugadores.\n");
printf("\n");
printf("3. Borrar el historial de los jugadores.\n");
printf("\n");
printf("4. Salir.\n");
printf("\n");
printf("Selecione una de las opciones brindadas:");
scanf("%d", &opcion);

//Limpieza del Salto de Linea
getchar();

switch (opcion)
{
case 1:
puntos = 0;
printf("\n");
printf("Adivinanzas:");
printf("\n");

//Adivinanza 1
printf("\n1. Tengo agujas y no se coser. Dime, que soy?\n");
printf("\n");
printf("Respuesta: ");
fgets(respuesta, 50, stdin);

respuesta[strcspn(respuesta, "\n")] = '\0';

if (strcmp(respuesta, "reloj") == 0)
{
printf("\n");
printf("Su respuesta es correcta.");
printf("\n");
puntos++;
}
else
{
printf("\n");
printf("Su respuesta es incorrecta. La respuesta era reloj.\n");
printf("\n");
}

//Adivinanza 2
printf("\n");
printf("\n2. Blanca por dentro, verde por fuera. Dime, que soy?\n");
printf("\n");
printf("Respuesta: ");
fgets(respuesta, 50, stdin);

respuesta[strcspn(respuesta, "\n")] = '\0';

if (strcmp(respuesta, "pera") == 0)
{
printf("\n");
printf("Su respuesta es correcta.\n");
printf("\n");
puntos++;
}
else
{
printf("\n");
printf("Su respuesta es incorrecta. La respuesta era pera.\n");
}

//Adivinanza 3
printf("\n3. Tiene dientes y no puedo comer. Dime, quien soy?\n");
printf("Respuesta: ");
fgets(respuesta, 50, stdin);

respuesta[strcspn(respuesta, "\n")] = '\0';

if (strcmp(respuesta, "peine") == 0)
{
printf("\n");
printf("Su respuesta es correcta.\n");
printf("\n");
puntos++;
}
else
{
printf("\n");
printf("Su respuesta es incorrecta. La respuesta era peine.\n");
}

//Adivinanza 4
printf("\n");
printf("\n4. Vuelo sin alas y lloro sin ojos. Dime, quien soy?\n");
printf("\n");
printf("Respuesta: ");
fgets(respuesta, 50, stdin);

respuesta[strcspn(respuesta, "\n")] = '\0';

if (strcmp(respuesta, "nube") == 0)
{
printf("\n");
printf("Su respuesta es correcta.\n");
printf("\n");
puntos++;
}
else
{
printf("\n");
printf("Su respuesta es incorrecta. La respuesta era nube.\n");
printf("\n");
}

//Adivinanza 5
printf("\n5. Cuanto mas me quitas, mas grande se vuelve. Dime, quien soy? \n");
printf("Respuesta: ");
fgets(respuesta, 50, stdin);

respuesta[strcspn(respuesta, "\n")] = '\0';

if (strcmp(respuesta, "agujero") == 0)
{
printf("\n");
printf("Su respuesta es correcta.\n");
printf("\n");
puntos++;
}
else
{
printf("\n");
printf("Su respuesta es incorrecta. La respuesta era agujero.\n");
printf("\n");
}

//Mostrarle la puntuacion al usuario
printf("\n");
printf("Su puntuacion es de: %d de 5\n", puntos);

// Se le solicita el nombre al usuario
printf("\n");
printf("Ingrese su nombre: ");
printf("\n");
fgets(nombre, 50, stdin);

nombre[strcspn(nombre, "\n")] = '\0';

// Se abre archivo para agregar la puntuacion
archivo = fopen("puntuaciones.txt", "a");

if (archivo == NULL)
{
printf("\n");
printf("No se pudo abrir el archivo.");
printf("\n");
}
else
{
fprintf(archivo, "%s - %d/5\n", nombre, puntos);

fclose(archivo);

printf("Puntuacion guardada correctamente. \n");
}

break;

case 2:
printf("\n Historial de Jugadores \n");

archivo = fopen("puntuaciones.txt", "r");

if (archivo == NULL)
{
printf("\n");
printf("No hay jugadores registrados. \n");
printf("\n");
}
else
{
char linea[100];
while (fgets(linea, 100, archivo) != NULL)
{
printf("\n");
printf("%s", linea);
printf("\n");
}
fclose(archivo);
}

break;

case 3:

printf("\n");
printf("Borrar el historial.\n");
printf("\n");

if (remove("puntuaciones.txt") == 0)
{
printf("\n");
printf("El historial ha sido eliminado.\n");
printf("\n");
}
else
{
printf("\n");
printf("No existe un historial para ser eliminado.\n");
printf("\n");
}

break;

case 4:

printf("\n");
printf("\nMuchas gracias por jugar.\n");
printf("\n");

break;

default:

printf("\n");
printf("\nOpcion no valida. Seleccione una de las opciones mostradas. \n");
printf("\n");
}

} while (opcion != 4);

return 0;

}
