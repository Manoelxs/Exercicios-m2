#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)
{

	int exercicio;
	
	setlocale(LC_ALL, "");
	
	printf("Digite o numero 1, 2 ou 3 para escolher um exerc�cio, ou o numero 4 para finalizar\n");
	scanf(" %i", &exercicio);
	
	switch (exercicio) {
		
	case 1: {
		float l, a, c, z;

		printf("Descubra o valor de Z=L+A*2.3/C\n\n");
		printf("Digite o valor de A : ");
		scanf("%f", &a);

		printf("Digite o valor de C : ");
		scanf("%f", &c);

		printf("Digite o valor de L : ");
		scanf("%f", &l);

		z = ((l + a) * 2.3) / c;
		printf("\n-----------------------\n");
		printf("O valor de Z �: %f\n", z);
		printf("-----------------------\n");
		
		break;
		
	}
	
	case 2: {
		
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
		
		}break;
		
	case 3: {
		
		float numero, soma = 0;
		int cont = 0;
		
		printf("Digite 20 valores e veja o resultado no final\n");
		
		while (cont < 20) {
			
			printf("Insira o valor %d: ", cont + 1);
			scanf("%f", &numero);

			soma = soma + numero;
			cont++;
		}
		
		printf("\nResultado = %.2f\n", soma);
		
		break;
	}
	
	case 4: {
		
		printf("Finalizando execu��o.\n");
		break;
	}
	
	default: {
		
		printf("Opcao inv�lida\n\n");
		
		break;
	}
	
	}
	
	}
}
		

