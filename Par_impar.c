#include <stdio.h>

int main() {
  int numero;

  printf("Ingrese un número entero: ");
  scanf("%d", &numero);

  // El operador módulo (%) devuelve el resto de una división.
  // Si el resto de la división entre 2 es 0, el número es par.
  if (numero % 2 == 0) {
    printf("%d es un número par.\n", numero);
  } else {
    printf("%d es un número impar.\n", numero);
  }

  return 0;
}