#include <stdio.h>

float converte(float cels)
{
	float fahr;
	fahr = (cels*1.8) + 32;
	return(fahr);
}
int main(void)
{
	float cels, fahr;
	
	printf("Insira o valor em Celsius:\n");
	scanf("%f", &cels);

	fahr = converte(cels);
	printf("%.1f Celsius, equivale a %.1f Fahrenheit.\n", cels, fahr);
}
