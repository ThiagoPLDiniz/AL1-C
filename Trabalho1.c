#include <stdio.h>
int main()
{
	int i, parcela_emprestimo=-1;
	char resposta;
	float saldoatual, saque, saldo, deposito, emprestimo=0, limite, juros, parcela;
	
	printf("Insira o valor de seu saldo atual:\n");
	scanf("%f", &saldoatual);
	saldo = saldoatual;
	do
	{
		printf("Qual operacao deseja realizar? s)Saque; d)Deposito; e)Emprestimo; a)Saldo Final.\n");
		scanf("\n%c", &resposta);
		
		
		switch(resposta)
		{
			case 's': 
				
				if(saldo<0)
				{
					printf("Seu saldo esta negativo. Operacao invalida!");
					break;
				}
				
				printf("Insira o valor do saque:\n");
				scanf("%f", &saque);
				
				
				if(saque<=saldo || saque>saldo && saque<= saldo + 1000)
				{
					saldo = saldo - saque;
				}
				else
				{
					printf("O valor do saque excede seu saldo e o seu limite especial!\n");
				}
				break;
			case 'd':
				printf("Insira o valor de deposito:\n");
				scanf("%f", &deposito);
				
				saldo = saldo + deposito;
				break;
			case 'e':
				if(saldo<0 || emprestimo>0)
				{
					printf("Seu saldo esta negativo ou você ja tem um emprestimo ativo. Operacao invalida!\n");
					break;
				}
				
				printf("Insira o valor de emprestimo:\n");
				scanf("%f", &emprestimo);
				parcela_emprestimo = 0;
				if(emprestimo <= (saldo*40) / 100)
				{
					saldo = saldo + emprestimo;
				}
				else
				{
					printf("Valor de emprestimo excede seu limite!\n");
				}
				break;
			case 'a': 
				break;	
			default:
				printf("Opcao (%c) invalida!!\n", resposta);	
		}
		
		if(saldo<0)
		{
			limite = -1*(saldo);
			juros = limite/100;
			saldo = saldo - juros;
		}
		
		if(parcela_emprestimo>=0)
		{
			parcela_emprestimo++;
		}
		
		if(parcela_emprestimo%5==0)
		{
			parcela = (emprestimo/5)+ (emprestimo*0.1);
			saldo = saldo - parcela; 
			printf("Parcela de emprestimo descontada. Descontamos %.2f de sua conta.\n", parcela);
		}
		
		
		printf("Seu saldo atual e: %.2f\n", saldo);	
	} while (resposta != 'a');
	printf("Seu saldo final foi: %.2f", saldo);
}
