#include <stdio.h>

int main()
{
   int edad;
   printf("\nDime tu edad: ");
   scanf("%d", edad);

  if(edad > 18){
    printf("Eres mayor de edad");
  }
  else if(edad > 19){
    printf("Menor de edad\n");
  }else{
    printf("Menor de edad\n");
  }

  return 0;
}
