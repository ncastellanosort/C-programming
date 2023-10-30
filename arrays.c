#include <stdio.h>
#include <string.h>
int main()
{
  // Coleccion de datos del mismo tipo
  // [size del array] 
  int numeros[] = {1,2,3,4,5,6,7};
  double decimales[] = {2.3,1.2,2.2};
  
  // Imprimir por indice, en la variable va el indice
  printf("%d\n", numeros[2]);
  
  // sizeof() devuelve el tamano del array pero en bytes
  // Si eso lo dividimos por un elemento, nos da la cantidad de elementos

  for(int i=0;i < sizeof(numeros)/sizeof(numeros[0]); i++)
  {
    printf("%d. %d\n",i+1, numeros[i]);
  }

  // 2D array
  // Filas x Columnas 
  /*int nums[3][3] = {
  {1,2,3},
  {4,5,6},
  {7,8,9}
  };*/

  int nums[2][2];
  
  int fil = sizeof(nums)/sizeof(nums[0]);
  int col = sizeof(nums[0])/sizeof(nums[0][0]);
  nums[0][0] = 1;
  nums[0][1] = 2;
  nums[1][0] = 3;
  nums[1][1] = 4;

  // Recorrerlo
  
  for(int i=0; i < fil; i++)
  {
    for(int j=0; j < col; j++)
    {
      printf("%d", nums[i][j]);
    }
    printf("\n");
  }
  
  // Array de strings

  char carros[][15] = {"chevrolet", "camaro", "mercedes"};
  
  // Para editar un indice se usa el strcpy
  strcpy(carros[0], "lambo");

  for(int i=0; i < sizeof(carros)/sizeof(carros[0]); i++)
  {
    printf("%s\n", carros[i]);
  }

  return 0;
}
