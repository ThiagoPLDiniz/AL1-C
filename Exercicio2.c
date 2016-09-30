#include <stdio.h>
int main()
{
	int valor, i, menor, maior=0;
	
	for(i=0; i<5; i++)
	{
		printf("Insira um valor:\n");
		scanf("%d", &valor);
		
		if(valor>maior)
		{
			maior = valor;
		}
		else
		{
			if(valor<menor)
			{
				menor = valor;
			}
			else
			{
				continue;
			}
		}
	}
	printf("Maior numero entre os digitados: %d\n", maior);
	printf("Menor numero entre os digitados: %d\n", menor);
}
