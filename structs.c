#include <stdio.h>
#include <string.h>
// Coleccion de variables que pueden ser de diferente tipo de dato
// Guardados bajo 1 nombre en bloque de memoria
// Similares a las clases pero sin metodos

struct Persona
{
  // Si hay un array de char, debemos usar el strcpy
  // Es como una forma tambien de convertir el char en string en si para el formateo
  char nombre[12];
  int edad;
};


int main()
{
  // Es como crear objetos
  struct Persona juanito;

  strcpy(juanito.nombre, "Juanito");
  // Aca no debemos usar el strcpy porque ya es un int
  juanito.edad = 17;

  printf("Nombre: %s\n", juanito.nombre);
  printf("Edad: %d\n", juanito.edad);


  return 0;
}
