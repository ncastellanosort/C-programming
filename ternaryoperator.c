#include <stdio.h>

int main()
{
 // Version de 1 linea de if/else
  // (condicion) ? valor si verdadero : valor si falso
  
  int num = 12;

  if (num > 10){
    printf("Es mayor\n");
  }else{
    printf("Es menor\n");
  }
  
  // Lo mismo pero con el ternario
  (num > 10) ? printf("Es mayor\n") : printf("Es menor\n");


  return 0;
}
