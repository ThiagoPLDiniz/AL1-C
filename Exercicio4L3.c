#include <stdio.h>
int main()
{
	//resolvido
	int i, numero, qtd=0, soma=0;
	
	for (i=0; i<=299; i++)
	{
		printf("Insira um n�mero real: (%d)\n", i+1);
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
	printf("Voc� digitou %d numeros negativos\n", qtd);
	printf("A soma dos positivos que voc� digitou foi: %d\n", soma);
	
}
