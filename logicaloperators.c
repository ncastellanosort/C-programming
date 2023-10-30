#include <stdio.h>

int main()
{
  // AND &&
  // OR ||
  // NOT !
  
  float temp = 24;
  bool sol = true;
  
  // Se pone solo sol porque en si ya es true
  // Se puede poner !sol para negar el true
  if(temp >= 0 && temp <= 30 && sol || temp >= 1){
    printf("Hace lindo dia\n");
  }else{
    printf("No hace lindo dia\n");
  }




 return 0;
}
