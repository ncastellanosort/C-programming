#include <stdio.h>
#include <stdbool.h>
 // Para los booleanos toca importar esa bilbioteca
 
int main(){
  char a = 'C';
  char b[] = "String";
  double c = 3.121592;  // 4 bytes (32 bits de precision), 6-7 digitos %f
  double d = 3.141242124212324; // 8 bytes (64 bits de precision), 15-16 digitos %lf

  bool e = true; // 1 byte (1 positivo, 0 negativo) %d
  // Se puede en 1 sola linea

  printf("%d", 10 > 9); 
  // char que puede ser representado como numero o como codigo ASCII
  char f = 100; // 1 byte (-128 a 127) %d para numero y %c para caracter ASCII 
  unsigned char g = 255; // 1 byte (0 a 255) %d o %c
  
  short int h = 32767; // 2 bytes (-32768 a +32767), %d
  unsigned short int i = 65535; // 2 bytes (0 a 65535) %d
  
  int j = 2147483647; // 4 bytes (-2147483648 a 2147483647) %d
  unsigned int k = 4294967295 // 4 bytes desde 0 hasta esa cantidad %u
  
  long long int l = 2134123412412341234; // 8 bytes (-9 quintillones hasta 9 quint) %lld
  unsigned long long int m = 1902830918239018309183U; // 8 bytes (0 a 18 quintillones) %llu
  

  // Format Specifiers
  // %.1 = cantidad de decimales
  // %1 = campo de ancho en el texto

 
  return 0;
}
