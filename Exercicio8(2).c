#include <stdio.h>
int main()
{
	float salario, salariom;
	int idade, matricula, servico, fem=0, hom=0, i;
	char sexo;
	 
	for(i=0; i<250; i++)
	{
		printf("Qual a sua idade?\n");
		scanf("%d", &idade);
		printf("Digite sua matricula:\n");
		scanf("%d", &matricula);
		printf("Qual o seu sexo?\n");
		scanf("\n%c", &sexo);
		printf("Qual o seu salário?\n");
		scanf("%f", &salario);
		printf("Quantos anos trabalha na empresa?");
		scanf("%d", &servico);
		
		if(idade - servico < 21)
		{
			printf("%d\n", matricula);
		}
		
		if(sexo=='f')
		{
			fem = fem + 1;
		}
		else
		{
			if(sexo=='m')
			{
				hom = hom + 1;
				salariom = salariom + salario;
			}
			else
			{
				printf("Invalido!");
			}
		}
	}
	
	
	printf("A quantidade de funcionárias da empresa é: %d\n", fem);
	printf("A media salarial dos homens é: %.2f\n", salariom / hom);
}
	
