#include <stdio.h>
int main()
{
	//resolvido
	float final, taxa, valor, juros;
	int meses, i, anos;
	
	printf("Insira o valor investido:\n");
	scanf("%.2f", &valor);
	
	printf("Insira o valor de juros:\n");
	scanf("%.2f", &taxa);
	
	printf("Insira o tempo de investimento:\n");
	scanf("%d", &anos);
	
	meses = anos*12;
	final = valor;
	for(i=1; i<=meses; i++)
	{
		juros = (final * taxa) / 100;
		final = final +juros;
	}
	
	
	printf("%.2f", final);
	
}
