#include <stdio.h>
int main()
{
	//resolvido
	int n, i;
	
	printf("Insira um valor de 0 a 20:\n");
	scanf("%d", &n);
	
	if (n>=20)
	{
		printf("Erro! Número inválido!");
	}
	else
	{
		for(i=1; i<=99; i++)
		{
			if((i%10) + (i/10) == n)
			{
				printf("%d ", i);
			}
			else
			{
				continue;
			}
		}
	}
	
}
