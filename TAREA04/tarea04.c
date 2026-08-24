#include <stdio.h>
#include <stdlib.h>  //Libreria para Ejecutar Instrucciones del SO
#include <unistd.h> //Incluye la Biblioteca Para La Funcion Sleep
long long calcularFactorial(int num) {
if (num <= 1) {
return 1;
}
return num * calcularFactorial(num -1);
}
int main() {
FILE *archivo = fopen("salida.txt", "a");
system("clear");
if (archivo == NULL) {
printf("No se pudo abrir el archivo.\n");
return 1;

}
int opcion =0;
while (opcion !=3) {
system("clear");
printf("Menu:\n");
printf("\n");
printf("1. Ingresar Datos:\n");
printf("\n");
printf("2. Mostrar Historial:\n");
printf("\n");
printf("3. Salir.\n");
printf("Seleccione Una Opcion: ");
printf("\n");
scanf("%d", &opcion);
switch (opcion) {
case 1: {
char nombre[50];
int numero;

printf("\n");
printf("Ingrese Su Nombre: ");
printf("\n");
scanf("%s", nombre);

printf("\n");
printf("Ingrese Un Numero Entero: ");
scanf("%d", &numero);
long long factorial =
calcularFactorial(numero);
fprintf(archivo, "Nombre: %s\n",
nombre);
fprintf(archivo, "Numero Ingresado: %d\n",
numero);
fprintf(archivo, "Factorial: %lld\n\n",
factorial);
printf("\n");
printf("Datos Guardados en el archivo salida.txt.\n");
printf("\n");
sleep(5); //Pausa El Programa Durante 5 Segundos
break;
}

case 2: {
char c;
fseek(archivo, 0, SEEK_SET); //Coloca el Puntero Al Principio del Archivo
while ((c = fgetc(archivo)) != EOF) {
printf("%c", c);
}
printf("\n\n");
printf("Datos Almacenados en el Archivo salida.txt.\n");
sleep(5); //Pausa el Programa durante 5 Segundos
break;
}
case 3:
printf("\n");
printf("Saliendo del Programa.\n");
break;
default:
printf("\n");
printf("Opcion no Valida.\n");
break;
}
}
fclose(archivo);
return 0;
}
