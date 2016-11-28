#include <stdio.h>

int main(void)
{
	int vetor[]={0, 1}, i=0, n, resultado;
	
	printf("Insira qual posicao da sequencia, deseja conhecer:\n");
	scanf("%d", &n);
	
	do
	{
		resultado = vetor[i] + vetor[i+1];
		i++;
		vetor[i+1] = resultado;		
		
	} while(i<=n);
	printf("O numero %d da sequencia de Finonacci e: %d\n", n, vetor[n-1]);
}