#include <stdio.h>
// Toca importar <ctype.h> para el toupper
#include <ctype.h>
int main()
{
  
  char grado;

  printf("\nDime el grado: \n");
  scanf("%c", &grado);

  // Para el upper case se usa toupper
  grado = toupper(grado);

  switch (grado) {
    case 'A':
    printf("Grado A\n");
    break;

    case 'B':
    printf("Grado B\n");
    break;

    default:
    printf("Introduce un grado correcto.\n");
    
  }

  return 0;
}
