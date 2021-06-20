#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"");
	
	int mat[4][5], scoluna[5];
	int l, c, soma, total;
	
	for (l=0; l<4; l++){
		soma = 0;
		for ( c=0; c<5; c++){
			printf("Mattriz[%d][%d]:", l, c);
			scanf("%d", &mat[l][c]);
			soma = soma + mat[l][c];			
		}
		
		total = total + soma;
		
		printf("\nSoma da coluna: %d\n\n", soma);
	}
	
	printf("A soma de todas as colunas é: %d", total);
	
	return(0);
}
