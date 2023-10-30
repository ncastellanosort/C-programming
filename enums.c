#include <stdio.h>
#include <string.h>

// Son constantes con un numero entero asociado
// El valor por defecto es: 0 1 2 3 4...
// Pero se puede cambiar

enum Dia{Lun = 1, Mar = 2, Mier = 3, Jue = 4, Vier = 5, Sab = 6, Dom = 7};

int main()
{
  
  // Son interpretados como enteros, no como strings
  // Aca Lun = 1
  enum Dia hoy = Lun;
  
  printf("%d\n", hoy); // Imprime 1
  
  if(hoy == 1 || hoy == Dom)
  {
    printf("Fin de semana\n");
  }else
  {
    printf("No es fin de semana\n");
  }


  return 0;
}

