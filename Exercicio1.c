#include <stdio.h>
int main()
{
	int numero, valor, resultado=0;
	
	printf("Insira um numero inteiro:\n");
	scanf("%d", &numero);
	
	if(numero>=1000)
	{
		valor = numero / 1000;
		numero = numero % 1000;
		resultado = resultado + valor;
		valor = numero / 100;
		numero = numero % 100;
		resultado = resultado + valor;
		valor = numero / 10;
		numero = numero % 10;
		resultado = resultado + valor + numero;
	}
	else
	{
		if(numero>=100)
		{
			valor = numero / 100;
			numero = numero % 100;
			resultado = resultado + valor;
			valor = numero / 10;
			numero = numero % 10;
			resultado = resultado + valor + numero;
		}
		else
		{
			if(numero>=10)
			{
				valor = numero / 10;
				numero = numero % 10;
				resultado = resultado + valor + numero;
			}
		}
	}
	printf("O resultado da soma dos algarismos e: %d", resultado);
}
