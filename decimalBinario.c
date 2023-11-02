#include <stdio.h>

int main()
{
  int num, ind;
  char bin[32];

  printf("----Decimal a Binario----\n");
  printf("Dime el numero: ");
  scanf("%d", &num);

  if(num == 0)
  {
  bin[0] = '0';
  bin[1] = '\0';
  }else
  {
    while(num > 0)
    {
      int res = num % 2;
      bin[ind] = (char)(res + '0');
      num = num / 2;
      ind++;
    }
    bin[ind] = '\0';
  }

  printf("El numero en binario es: %s", bin);

  return 0;
}
