#include <stdio.h>
int main()
{
	int inteiros=4, i, valor, soma=0, maior;
	float media, numeropar=0;
	
	for(i=1; i<=inteiros; i++)
	{
		printf("Insira um valor inteiro:\n");
		scanf("%d", &valor);
		
		if(valor%2==0)
		{
			soma = soma + valor;
			numeropar = numeropar + 1;
		}
		else
		{
			continue;
		}
		if(i%2==0 && valor>maior)
		{
			maior = valor;
		}
		else
		{
			continue;
		}	
	}
	media = soma / numeropar;
	printf("O maior inteiro, digitado em ordem par foi: %d\n", maior);
	printf("A media dos valores pares digitados e: %.1f", media);
}
