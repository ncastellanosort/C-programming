#include <stdio.h>
#include <stdlib.h>

int main()
{
  
 /* Permite reservar o asignar un espacio en memoria dentro del hip
  Nos devuelve la direccion en memoria del primer elemento de la pila
  Es un puntero a un tipo no especificado de dato
  
 En malloc solo se senala la cantidad de bytes de espacio que quiere reservarse:
  void *malloc(int n_bytes);

 En cambio en calloc se indica la cantidad de elementos deseados y el espacio en bytes de cantida  elemento: Calloc inicializa los bits en 0, todos
  void *calloc(int n_datos, int tamano_datos); 
  
  Si el pedido de memoria falla, devuelve un NULL

  */
  
  // Asignar espacio con malloc
  int n = 10;
  int *p;

  p = (int*) malloc((n)*sizeof(int)); // 10 * 4(tamano de un int)
                                      //  (int*) es un type-casting
 
  // Siempre es bueno preguntar el NULL para los errores;
  if(p==NULL)
  {
    printf("Error de pila!");
    return 1;
  }


  // Asignar espacio con calloc
  int *q;
  q = (int*) calloc(n, sizeof(int));


  // IMPORTANTE!, Siempre librerar el espacio guardado en malloc o calloc
  // Se le pasa el puntero que esta apuntando al inicio de la pila

  free(p);
  free(q);
 

  return 0;
}
