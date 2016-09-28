#include <stdio.h>
int main()
{
	float fahr, cels;
	
	printf("Insira a temperatura em Fahrenheit:\n");
	scanf("%f", &fahr);
	
	cels = (5 * (fahr-32) / 9);
	
	printf("%.1f Fahrenheit, corresponde a %.1f Celsius", fahr, cels);
}
