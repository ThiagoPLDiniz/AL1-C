#include <stdio.h>
int main()
{
	float metro, centimetro;
	
	printf("Insira o valor em metros: \n");
	scanf("%f", &metro);
	
	centimetro = metro * 100;
	
	printf("%.1f metros sao %.1f centimetros.", metro, centimetro);
}
