#include <stdio.h>
#include <stdbool.h> 
bool esPrimo(int numero) {
  
  if (numero <= 1) {
    return false; 
  }
  if (numero <= 3) {
    return true;  
  }

  
  if (numero % 2 == 0 || numero % 3 == 0) {
    return false;
  }

  
  for (int i = 5; i * i <= numero; i = i + 6) {
    if (numero % i == 0 || numero % (i + 2) == 0) {
      return false;
    }
  }

  return true; 
}

int main() {
  int numero;

  printf("Ingrese un numero entero: ");
  scanf("%d", &numero);

  if (esPrimo(numero)) {
    printf("%d es un numero primo.\n", numero);
  } else {
    printf("%d no es un numero primo.\n", numero);
  }

  return 0;
}