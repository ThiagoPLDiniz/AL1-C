#include <stdio.h>
int main()
{
	int x, i, gostou=0, fem=0, hom=0, ng=0;
	char sexo, resposta;
	
	printf("Quantos foram entrevistados?\n");
	scanf("%d", &x);
	
	for(i=1; i<=x; i++)
	{
		printf("O entrevistado(a) gostou do produto? g) gostou; n) nao gostou.\n");
		scanf("\n%c", &resposta);
		printf("Qual o sexo do entrevistado(a)? f) feminino; m) masculino.\n");
		scanf("\n%c", &sexo);
		
		if(resposta == 'g')
		{
			gostou = gostou + 1;
		}
		else
		{
			if(resposta == 'n')
			{
				ng = ng + 1;
			}
			else
			{
				printf("Invalido!");
			}
		}
		if(sexo == 'm')
		{
			hom = hom + 1;
		}
		else
		{
			if(sexo == 'f')
			{
				fem = fem + 1;
			}
			else
			{
				printf("Invalido!");
			}
		}
		
	}
	
	printf("Gostaram do produto: %d\n", gostou);
	printf("Não gostaram do produto: %d\n", ng);
	if(fem > hom)
	{
		printf("O produto teve maior aceitação com o sexo feminino!");
	}
	else
	{
		printf("O produto teve maior aceitação com o sexo masculino");
	}
}
