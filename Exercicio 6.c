#include <stdio.h>
#include <locale.h>
#include <conio.h>



int main(void) {

	setlocale(LC_ALL, "");

	float c, f;
		
	for (f = 40; f <= 60; f++) {
		c = (5.0 / 9) * (f - 32);
		printf("%2.f Graus Fahrenheit é igual a %2.f graus celsius\n", f, c);
	}
	
	return(0);
}


		
