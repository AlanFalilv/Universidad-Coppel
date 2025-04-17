#include <stdio.h>

int main() {
    int numero;
    int numero_invertido = 0;
    int resto;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    
    int es_negativo = 0;
    if (numero < 0) {
        es_negativo = 1;
        numero = -numero; 
    }

    
    while (numero > 0) {
        resto = numero % 10;       
        numero_invertido = numero_invertido * 10 + resto; 
        numero = numero / 10;      
    }

    
    if (es_negativo) {
        numero_invertido = -numero_invertido;
    }

    printf("El numero invertido es: %d\n", numero_invertido);

    return 0;
}