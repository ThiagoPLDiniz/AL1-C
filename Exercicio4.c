#include <stdio.h>
int main()
{
	int i;
	float nota, soma=0, media;
	
	for(i=1; i<=4; i++)
	{
		printf("Insira a sua nota no bimestre %d: \n", i);
		scanf("%f", &nota);
		
		soma = soma + nota;
	}
	media = soma / 4;
	printf("A sua media foi: %.2f", media);
	
	
}
