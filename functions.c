#include <stdio.h>

// void: vacio que no devuelve nada
void saludo()
{
  printf("Hola que mas!\n");
}

// Se le debe poner el tipo de dato que va a recibir
void cumple(char nombre[])
{
  printf("Feliz cumple %s\n", nombre);
}

// Funcion que devuelve algo
// No debe ser void, se debe poner el tipo de dato que va a devolver

double potencia(double x)
{
  // double result = x * x
  // return result
  return x * x;
}

int main()
{
  // El nombre que va a usar la funcion
  char nombre[] = "Nicolas";
  
  double num = potencia(3);
  printf("res: %.1lf\n", num);
  // Llamar la funcion
  saludo();

  // Llamando la funcion con parametros
  cumple(nombre);


  return 0;
}
