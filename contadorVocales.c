#include <stdio.h>
#include <string.h>
#define TAM_PAL 32

int main()
{
  char palabra[TAM_PAL]; 
  int cont = 0;

  printf("------Contador de vocales------\n");
  
  printf("Palabra: ");
  scanf("%s", palabra);
  
  strlwr(palabra);

  for(int i = 0; i < sizeof(palabra)/sizeof(palabra[0]); i++)
  {

   char vocales[5] = {'a', 'e', 'i', 'o', 'u'};

    for(int j = 0; j < 5; j++)
    {
      if(palabra[i] == vocales[j])
      {
      cont += 1;
      }
    }
  }

  printf("Cantidad de vocales: %d", cont);

  return 0;
}
