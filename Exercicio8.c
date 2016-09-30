#include <stdio.h>
int main()
{
	int contagem = 0, repeticoes=5, x, y, i, valor;
	
	printf("Insira um valor x:\n");
	scanf("%d", &x);
	printf("Agora, insira um valor y:\n");
	scanf("%d", &y);
	
	if(y<x)
	{
		for(i=1; i<=repeticoes; i++)
		{
			printf("Insira um valor:\n");
			scanf("%d", &valor);
		
			if(x-valor <= y)
			{
				contagem = contagem + 1;
			}
			else
			{
				continue;
			}
		}
	}
	else
	{
		if(y>x)
		{
			for(i=1; i<=repeticoes; i++)
			{
				printf("Insira um valor:\n");
				scanf("%d", &valor);
				
				if(valor-x <= y)
				{
					contagem = contagem + 1;
				}
				else
				{
					continue;
				}
			}
		}
	}
	
	printf("Voce digitou %d numeros a uma distancia maxima de %d do numero %d\n", contagem, y, x);
}
