#include <stdio.h>
// Operaciones a nivel binario
int main()
{

  // & = AND -> Si todos son 1, se asigna un 1 en la columna, si no no
  // | = OR -> Con que haya un 1 se asigna el 1
  // ^ = XOR -> Solo si hay 1 solo que sea uno se pone 1, si los 2 son 1 se pone 0  
  // << = left shift -> Moviendo el resultado de los bits hacia la izquierda
  // >> = right shift -> Moviento el resultado de los bits hacia la derecha
  
  // A numeros de 8 bits
  int x = 6;  // 00000110
  int y = 12; // 00001100
  int z = 0;  // 00000000

  z = x & y;
  z = x | y;
  z = x ^ y;
  z = x << y;
  z = x >> y;

  printf("%d\n", z);

  return 0;
}
