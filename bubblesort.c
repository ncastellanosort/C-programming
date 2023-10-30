#include <stdio.h>

// 1. Compara si el indice es mayor al siguiente
// 2. Ahora el indice que estamos usando lo guardamos en una variable temporal
// 3. Luego el numero siguiente al que estabamos iterando pasa a la posicion del que estabamos iterando
// 4. Y por ultimo en la posicion siguente el numero que estabamos iterando vamos a guardar el primer numero

void bubblesort(int array[], int tamano)
{
  for(int i=0; i < tamano-1; i++)
  {
    for(int j=0; j < tamano-1; j++)
    {
      if(array[j] > array[j + 1])
      {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

}


void imprimir(int array[], int tamano)
{
  for(int i = 0; i < tamano; i++)
  {
    printf("%d, ",array[i]);
  }
}


int main()
{

  int array[] = {1,6,5,4,7,3,8,9,0,7,};
  int tamano = sizeof(array)/sizeof(array[0]);

  bubblesort(array, tamano);
  imprimir(array,tamano);

  return 0;
}
