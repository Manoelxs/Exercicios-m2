#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"");

char sexo;

		float altura, pIdeal;
		printf("Digite seu sexo, M para masculino, F para feminino.\n");
		sexo = _getche();
		printf("\nDigite sua altura em cent�metros: \n");
		scanf("%f", &altura);
		
		altura = altura/100;
		
		switch (sexo) {
			
		case 'M': {
			pIdeal = (450.7 * altura) / 10;
			printf("Peso ideal: %2.f Kg", pIdeal);
			break;
		}

		case 'm': {
			pIdeal = (450.7 * altura) / 10;
			printf("Peso ideal: %2.f Kg", pIdeal);
			break;
		}
		case 'F': {
			pIdeal = (400.7 * altura) / 10;
			printf("Peso ideal: %2.f Kg", pIdeal);
			break;
		}
		case 'f': {
			pIdeal = (400.7 * altura) / 10;
			printf("Peso ideal: %2.f Kg", pIdeal);
			break;
		}
		default: {
			printf("Sexo inv�lido\n");
			break;
		}
		
		return(0);
		
	}
}
