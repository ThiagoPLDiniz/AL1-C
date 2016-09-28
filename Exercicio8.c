#include <stdio.h>
int main()
{
	int horas;
	float dinheiro, salario;
	
	printf("Quanto voce recebe por hora trabalhada?\n");
	scanf("%f", &dinheiro);
	printf("Quantas horas trabalha no mes?\n");
	scanf("%d", &horas);
	
	salario = horas * dinheiro;
	
	printf("Seu salário mensal e: %.2f", salario);
}
