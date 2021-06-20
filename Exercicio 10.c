#include <stdio.h>
#include <locale.h>

float media(float n1, float n2, float n3, float n4)
{
	float resultado;
	
	resultado = (n1 + n2 + n3 + n4) / 4;
	
	return(resultado);
	
}

int aprovado (float ap)
{
	float resultado;
	
	resultado = ap;
	
	if(resultado >= 6){
		
		printf("\nAluno aprovado\n\n");
		
	}else{
		
		printf("\nAluno reprovado\n\n");
		
	}
	
}

int main(void)
{

	setlocale(LC_ALL,"");
		
	char resp;
	float n1, n2, n3, n4, medianota, resultado;
	
	do{
	printf("Digite as quatro notas do aluno: \n");
	printf("Nota 01: ");
	scanf("%f", &n1);
	
	printf("Nota 02: ");
	scanf("%f", &n2);
	
	printf("Nota 03: ");	
	scanf("%f", &n3);
	
	printf("Nota 04: ");
	scanf("%f", &n4);
		
	medianota = media(n1, n2, n3, n4);
	
	printf("As notas do aluno são: %2.f, %2.f, %2.f, %2.f.\n", n1, n2, n3, n4);
	printf("E a sua média é: %0.2f", medianota);
	
	resultado = aprovado(medianota);
	
	printf("Deseja continuar? y/n\n\n");
	resp = getch();
	
}while(resp=='y');

return(0);

	}












//printf("As notas do aluno são:\n");
//	printf("Nota 1: %f\n", n1);
//	printf("Nota 2: %f\n", n2);
//	printf("Nota 3: %f\n", n3);
//	printf("Nota 4: %f\n", n4);
//	printf("A média é: %f\n", resultado);
	
