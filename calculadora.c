#include <stdio.h>

int main()
{
  char txt;
  float x, y, res;

  printf("-------Calculadora-------\n");

  printf("Selecciona la operacion (+,-,*,/): ");
  scanf("%c",&txt);


  printf("\nIntroduce el primer numero: ");
  scanf("%f", &x);
  
  printf("Introduce el segundo numero: ");
  scanf("%f", &y);


  switch(txt){
  case '+':
    res = x + y;
    break;

  case '-':
    res = x - y;
    break;

  case '*':
    res = x * y;
    break;

  case '/':
    if(y != 0)
    {
      res = x / y; 
    }else {
      printf("Error: division por 0");
      return 1;
    }
    break;

  default:
    printf("Introduce una operacion valida.");
  }

  printf("Resultado: %.1f", res);

  return 0;
}
