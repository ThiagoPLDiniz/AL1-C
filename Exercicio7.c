#include <stdio.h>
int main()
{
	int i, valor, soma=0, menor=100000, somault=0;
	float media;
	
	for(i=1; i<=15; i++)
	{
		printf("Insira um valor:\n");
		scanf("%d", &valor);
		
		if(i<=5)
		{
			soma = soma + valor;
		}
		else
		{
			if((i>=5 && i<=10)&&(valor<menor))
			{
				menor = valor;
			}
			else
			{
				if(i>=10)
				{
					somault = somault + valor;
				}
				else
				{
					continue;
				}
			}
		}
		
	}
	media = somault/5.00;
	printf("A soma dos primeiros 5 valores: %d\n", soma);
	printf("O menor numero do quinto ao decimo: %d\n", menor);
	printf("A media dos ultimos 5 valores: %.2f", media);
}
