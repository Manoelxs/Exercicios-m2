#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	float l, a, c, z;

	printf("Descubra o valor de Z=L+A*2.3/C\n\n");
	printf("Digite o valor de A : ");
	scanf("%f", &a);

	printf("Digite o valor de C : ");
	scanf("%f", &c);

	printf("Digite o valor de L : ");
	scanf("%f", &l);

	z = ((l + a) * 2.3) / c;

	printf("\nO valor de Z é: %0.3f", z);
	
	return(0);
}
