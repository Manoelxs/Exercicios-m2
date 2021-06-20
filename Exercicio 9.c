#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
 
	struct nascimento{
		
		int dia;
		int mes;
		float ano;
		
	};
	
	struct {
		
	int codigo, idade;
	char nome[100], endereco[100], sexo[10], status[6];
	float credito, valorD;
		
	struct nascimento nasci;
	
	}conta[5];
	
int main(){
	
	setlocale(LC_ALL,"");
	
		
	int i=0, resp;
	
	printf("----------Cadastro de clientes----------\n\n");
	
	do{
		
	for (i=0; i<=4; i++){
		
		printf("Digite o código do cliente.................: ");
		scanf("%d", &conta[i].codigo);
				
		printf("Digite o nome..............................: ");
		fflush(stdin);
		gets (conta[i].nome);
		
		printf("Digite o endereço..........................: ");
		fflush(stdin);
		gets (conta[i].endereco);
		
		printf("Digite o ano de nascimento.................: ");
		scanf("%f", &conta[i].nasci.ano);
		printf("Digite o mês de nascimento.................: ");
		scanf("%d", &conta[i].nasci.mes);
		printf("Digite o dia de nascimento.................: ");
		scanf("%d", &conta[i].nasci.dia);
		
		printf("Digite o sexo..............................: ");
		fflush(stdin);
		gets (conta[i].sexo);
			
		printf("Digite o valor total devido................: ");
		scanf("%f", &conta[i].valorD);
				
		printf("Digite o valor de credito..................: ");
		scanf("%f", &conta[i].credito);
		
		printf("Digite a idade.............................: ");
		scanf("%d", &conta[i].idade);
		
		printf("Digite o status do cadastro do cliente.....: ");
		fflush(stdin);
		gets (conta[i].status);
		printf("\n\n");
											
		}
		
		for (i=0; i<=4; i++){
			
			printf("Código do cliente..........................: %d\n", conta[i].codigo);
			
			printf("Nome.......................................: ");
			puts(conta[i].nome);
			
			printf("Endereço...................................: ");
			puts(conta[i].endereco);
			
			printf("Ano de nascimento..........................: %0.f\n", conta[i].nasci.ano);
			printf("Mes de nascimento..........................: %d\n", conta[i].nasci.mes);
			printf("Dia de nascimento..........................: %d\n", conta[i].nasci.dia);
			
			printf("Sexo.......................................: ");
			puts(conta[i].sexo);
			
			printf("Total devido...............................:%2.f\n", conta[i].valorD);
			
			printf("Credito....................................:%2.f\n", conta[i].credito);
			
			printf("Idade......................................: %d\n", conta[i].idade);
			
			printf("Status atual...............................: ");
			puts(conta[i].status);
			printf("\n");
		
		}
	
				printf("\n\nDeseja cadastrar novamente? Digite 1 para continuar, ou 2 para finalizar\n\n");
				resp = getch();
 
 			}while (resp == '1');
	
	
				
		printf("Finalizando a execução.");
		
		return(0);	
		
		
	}
	

	


