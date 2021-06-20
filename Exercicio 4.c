#include <stdio.h>
#include <locale.h>

int main()

setlocale(LC_ALL,"");

{
	int repum, repdois;
	float area, base, altura;
	repum = 0;
	
	for(repum=0; repum<6; repum++){
		
		printf("\n\nDigite o valor da base: ");
		scanf("%f", &base);
		printf("Digite a altura: ");
		scanf("%f", &altura);
		
		area = (base * altura) / 2;

			printf("A area é igual a: %.2f", area);
		}

	
	return(0);
}
