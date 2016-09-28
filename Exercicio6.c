#include <stdio.h>
int main()
{
	float raio, pi, area;
	
	printf("Insira o valor do raio: \n");
	scanf("%f", &raio);
	
	pi = 3.14;
	
	area = pi * (raio*raio);
	
	printf("A area do circulo e: %f\n", area);
}
