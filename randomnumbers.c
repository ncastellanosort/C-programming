#include <stdio.h>
// Importante tener estas 2
#include <stdlib.h>
#include <time.h>

int main()
{
  // Usar el tiempo de ahorita para crear numeros cada segundo
  srand(time(0));
  
  // Numero entre 0 y 32.067
  // (rand() % max) + min
  int num = (rand() % 20) + 1;

  printf("%d\n", num);


  return 0;
}
