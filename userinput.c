#include <stdio.h>

int main(){
  
  char nombre[25]; //25 bytes, si se pasa de 25 hay un buffer overflow
  int edad;

  // Si el user input va a contener espacios en blanco debemos usar fgets(nombrevariable, tamanoarray, stdin);
  printf("Dime tu nombre: \n");
  fgets(nombre, 25, stdin);

  printf("Dime tu edad: \n");
  // scanf(), leer input
  // El format specifier del tipo de variable y la variable con %
  scanf("%d", &edad);
  // Poner el format specifier de la variable donde se guarda el dato
  printf("Tu nombre es %s\n", nombre);
  printf("Tienes %d", edad);

  return 0;
}
