#include <stdio.h>
int main() 
{
	int n, i;
	float valor, peso, somavalor=0, somapeso=0, media;
	
	printf("Quantos termos tera seu calculo?\n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		printf("Insira o valor(%d):\n", i);
		scanf("%f", &valor);
		printf("Insira o peso do valor(%d):\n", i);
		scanf("%f", &peso);
		
		somavalor = somavalor + (valor*peso);
		somapeso = somapeso + peso;
	}
	media = somavalor / somapeso;
	printf("A media ponderada e: %.1f", media);
}
