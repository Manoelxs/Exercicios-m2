#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, maior, menor = 0, vet[10];
	int auxMenor = 9, auxMaior = 0;
		
	printf("Entre com um valor para cada posição do array:\n");
	for (i=0; i<=9; i++){	
	printf("Vetor[%d]: ", i);
	scanf("%d", &vet[i]);
}
	menor = 2147483647;
	for (i=0; i<=9; ++i) {
    if (menor > vet[i])
    {
		menor = vet[i];
		auxMenor = i;	
	}    
		
				
	if (maior < vet[i])
	{
		maior = vet[i];
		auxMaior = i;
	}
		
	}
	
	printf("Maior valor: %d, Vetor[%d]\n", maior, auxMaior);
	printf("Menor valor: %d, Vetor[%d]\n", menor, auxMenor);
	
	return(0);
}
