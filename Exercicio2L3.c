#include <stdio.h>
int main()
{
	//resolvido
	int i, j, soma=0;
	
	for (i=1,j=5; i<=5, j>=1; i++, j--)
	{
		printf("%d\n", i);
		printf("%d\n", j);
		soma = soma + i + j;
	}
	printf("Resultado da soma de todos os elementos: %d\n", soma);
	
	
	
}

