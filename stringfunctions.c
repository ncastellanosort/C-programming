#include <stdio.h>
// Metodos de los strings
// Traer la biblioteca
#include <string.h>

int main()
{
  char nombre[] = "Nicolas";
  char apellido[] = "Castellanos";

  strlwr(nombre); // lowercase
  strupr(nombre); // uppercase
  strcat(nombre, apellido); // Agrega segundo detras del primero
  strncat(nombre, apellido, 1); // Agrega n caracteres entre los 2
  strcpy(nombre, apellido); // Copia el apellido al nombre
  strncpy(nombre, apellido,1 ); // Copia el primer caracter del segundo al primero
  strset(nombre, 'A'); // Cambia todos los char del string por el que le pasemos
  strnset(nombre, 'x', 1); // Cambia el n char del string por el que le pongamos
  strrev(nombre); // Le da la vuelta al string
  
  // Estos devuelven un int

  int res = strlen(nombre); // Dice la cantidad de caracteres
  int res = strcmp(nombre, apellido); // Compara la cantidad de caracteres entre 2 cadenas, si son iguales de largas devuelve 0
  int res = strncmp(nombre, apellido, 1); // Compara n caracteres
  int res = strcmpi(nombre, apellido); // Lo mismo del cmp pero ignora mayusc
  int res = strnicmp(nombre, apellido, 1); // Igual
  return 0;
}
