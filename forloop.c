#include <stdio.h>

int main()
{
  for(int i = 0; i <= 10; i++)
  {
    printf("%d. Hola\n", i);
  }

  // For anidados
  int fil;
  int col;

  printf("n Filas: \n");
  scanf("%d", &fil);

  printf("n Columnas: \n");
  scanf("%d", &col);

  for(int i = 1; i <= fil; i++)
  {
    for(int j = 1; j <= col; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }

  // No olvidar el break; y el continue;

  return 0;
}
