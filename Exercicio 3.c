#include <stdio.h>

int main() {

    float numero, soma = 0;
    int cont = 0;

    while (cont < 20) {
        printf("Insira o valor %d: ", cont + 1);
        scanf("%f", &numero);

        soma = soma + numero;
        cont++;        
    }
    printf("Resultado = %.2f", soma);

    return 0;

}
