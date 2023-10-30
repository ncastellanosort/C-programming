#include <stdio.h>

int main()
{
  // memory: an array of bytes within RAM (street)
  // memory block: a single unit (byte) within memory, used to hold some value (person)
  // memory address: the address of where a memory block is located (house address)

   char a = 'X';
  
  // %p es el format specifier de la ubicacion en memoria
  // & es el address operator
  // El memory block es la cantidad de bits que ocupa y el espacioentre cada una
  printf("%p\n", &a);
 
  //POINTERS
  // Los pointers son una variable que guarda memory address
  
  int edad = 21;
  // Same datatype
  int *pEdad = &edad;

  printf("address de edad: %p\n", &edad);

  int x = 10;
  
  // Tipo de dato

  printf("x = %d\n", x);

  printf("\nPosicion de memoria de x: %p", &x);
  
  // Creacion del puntero para guardar una direccion de memoria
  
  int *Px = &x;

  return 0;
}
