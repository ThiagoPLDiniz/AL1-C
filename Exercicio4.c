#include <stdio.h>
int main() 
{
	int entrevistados=5, filhos, i, pessoas=0;
	float somasal=0, salario, maior=0, somafil=0, mediasal, mediafil, porcento;
	
	for(i=1; i<=entrevistados; i++)
	{
		printf("Insira o salario do entrevistado:\n");
		scanf("\n%f", &salario);
		printf("Insira o numero de filhos:\n");
		scanf("\n%d", &filhos);
		
		somasal = somasal + salario;
		somafil = somafil + filhos;
		
		
		if(salario>maior)
		{
			maior = salario;
		}
		else
		{
			if(salario<=1000)
			{
				pessoas = pessoas + 1;
			}
			else
			{
				continue;
			}
		}
	}
	mediasal = somasal / entrevistados;
	mediafil = somafil / entrevistados;
	porcento = (pessoas *100) / (entrevistados);
	
	printf("A media salarial da populacao: %.2f\n", mediasal);
	printf("A media de filhos da populacao: %.1f\n", mediafil);
	printf("O maior salario inserido foi: %.2f\n", maior);
	printf("A porcentagem de pessoas com salario abaixo de R$1000,00 sao: %.1f", porcento);
}
