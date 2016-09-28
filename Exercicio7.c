#include <stdio.h>
int main()
{
	float lado, dobro;
	
	printf("Insira o valor do lado do quadrado:\n");
	scanf("%f", &lado);
	
	dobro = (lado * lado) * 2;
	
	printf("O dobro da área do seu quadrado e: %.1f", dobro);
}
