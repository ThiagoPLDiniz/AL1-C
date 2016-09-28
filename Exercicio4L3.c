#include <stdio.h>
int main()
{
	//resolvido
	int i, numero, qtd=0, soma=0;
	
	for (i=0; i<=299; i++)
	{
		printf("Insira um número real: (%d)\n", i+1);
		scanf("%d", &numero);
		if (numero<0)
		{
			qtd++;
		}
		else
		{
			soma = soma + numero;
		}
	}
	printf("Você digitou %d numeros negativos\n", qtd);
	printf("A soma dos positivos que você digitou foi: %d\n", soma);
	
}
