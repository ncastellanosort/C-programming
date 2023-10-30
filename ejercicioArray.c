#include <stdio.h>

int main()
{
  int tamano;

  printf("\nDime el tamano del vector: ");
  scanf("%d", &tamano);

  int vector[tamano];

  int j = 0;
  for(int i = 0; i < tamano; i++)
  {
    j += 1;
    printf("\nDime el %d elemento: \n", j);
    int elem;
    scanf("%d", &elem);
    vector[i] = elem;
  }
  
  int h = 0;
  printf("\tElementos del vector: ");

  for(int k = 0; k < tamano; k++)
  {
    h += 1;
    printf("\n%d. %d\n", h, vector[k]); 
  }

  return 0;
}
