#include <stdio.h>
#include <string.h>

int main()
{
  
  int i = 0;
  while(i <= 10)
  {
    printf("%d. Hola\n", i);
    i++;
  }

  char nombre[25];

  printf("\nCual es tu nombre: \n");
  fgets(nombre, 25, stdin);
  // Esto es para arreglar el ultimo espacio del fgets
  nombre[strlen(nombre) - 1] = '\0';
  
  // Para hacerlo siempre que no se haya escrito nada
  // while(strlen(nombre) == 0)

  //do-while 
  int num = 0;
  int sum = 0;
  do{
    printf("Un numero mayor a 0: \n");
    scanf("%d", &num);
    if(num > 0){
      sum += num;
    }

  }while(num < 0);
  

  return 0;
}
