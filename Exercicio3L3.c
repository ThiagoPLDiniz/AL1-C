#include <stdio.h>
int main()
{
	//resolvido
	float final, juros, anos;
	int valor, meses;
	
	printf("Insira o valor investido:\n");
	scanf("%d", &valor);
	
	printf("Insira o valor de juros:\n");
	scanf("%f", &juros);
	
	printf("Insira o tempo de investimento:\n");
	scanf("%f", &anos);
	
	meses = anos*12;
	
	final = (valor * juros * meses) / 100;
	
	printf("%.2f", final);
	
}
