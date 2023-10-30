#include <stdio.h>
#include <string.h>
// Palabra reservada que le da a un tipo de dato un apodo
// Se crea como una plantilla para usar un tipo de dato

typedef char usuario[25];

// El nombre que le vamos a dar lo ponemos despues de las ;
typedef struct 
{
  char nombre[25];
  int edad;
} Persona;


int main()
{
  usuario user1 = "Nicolas";

  Persona persona1 = {"Pepito", 15};

  printf("Nombre: %s\n", persona1.nombre);
  printf("Edad: %d\n", persona1.edad);

  return 0;
  }
