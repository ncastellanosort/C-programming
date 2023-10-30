#include <stdio.h>

int main(){
  
  int num = 2; // %d
  float decimal = 3.2; // %f
  // Los char unicos van dentro de comillas simples
  char caracter = 'C'; // %c
  // Array de caracteres, ya que no existe en si el string
  char nombre[] = "Nicolas"; // %s
  
  // Constantes
  // Palabra reservada const
  // MAYUSCULA
  
  const float PI = 3.141251;


  printf("Yo tengo %d anios\n", num);
  printf("Mi nombre es %s\n", nombre);
  printf("Este es el lenguaje %c\n", caracter);
  printf("La temperatura es de grados\n");
 
  return 0;
}
