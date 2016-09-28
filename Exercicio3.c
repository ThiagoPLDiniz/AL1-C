#include <stdio.h>
int main()
{
	int soma, numero1, numero2;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d", &numero1);
	printf("Insira o segundo numero:\n");
	scanf("%d", &numero2);
	
	soma = numero1 + numero2;
	
	printf("A soma dos dois números é: %d", soma);
}
