#include <stdio.h>
#include <string.h>

typedef struct 
{
  char nombre[12];
  int nota;

} Estudiante;

int main()
{

  Estudiante n1 = {"Pepito", 4};
  Estudiante n2 = {"Juanito", 5};
  Estudiante n3 = {"Andresito", 5};

  // Array de structs

  Estudiante arrayest[] = {n1, n2, n3};

  for(int i=0; i < sizeof(arrayest)/sizeof(arrayest[0]); i++)
  {
    // El -10 quiere decir que hacia la izquierda hay un espacio de 10 caracteres
    printf("%-10s\t", arrayest[i].nombre);
    printf("%d\n", arrayest[i].nota);
  
  }

  return 0;
}
