#include <stdio.h>
int main()
{
	int numero, i, resultado=0;
	
	printf("Insira um valor inteiro: \n");
	scanf("%d", &numero);
	
	for(i=1; i<numero; i++)
	{
		if(numero % i == 0)
		{
			resultado = resultado + i;
		}
		else
		{
			continue;
		}
	}
	if(resultado==numero)
	{
		printf("O numero %d e perfeito!", numero, resultado);
	}
	else
	{
		printf("O numero %d nao e perfeito!", numero, resultado);
	}
}
