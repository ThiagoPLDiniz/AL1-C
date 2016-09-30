#include <stdio.h>
int main()
{
	int x, numero, multiplos=0, i;
	
	printf("Insira um numero inteiro:\n");
	scanf("%d", &x);
	
	for(i=0; i<50; i++)
	{
		printf("Insira um novo valor:\n");
		scanf("%d", &numero);
		
		if (numero % x == 0)
		{
			multiplos = multiplos + 1;
		}
		else
		{
			continue;
		}
	}
	
	printf("O numero de multiplos de %d digitados: %d", x, multiplos);
}
