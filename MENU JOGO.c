//Código feito por Mariana Görresen e Henrique Velloso
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void perguntas()
{
	int i;
	char escolha;
	
	printf("Jogo: Perguntas e Respostas!\n\n");
	
	printf("Primeira pergunta:\n1. Quantas casas decimais tem o numero pi?\n\n");
	printf("A. Duas\nB. Infinitas\nC. Milhares\n");
	scanf("%s", &escolha);
	
	if(escolha == 'a' || escolha == 'A')
	{
		printf("Resposta errada!\nA resposta correta eh letra B.\n\n");
	}
	else if(escolha == 'b' || escolha == 'B')
	{
		printf("Resposta correta!!\n\n");
	}
	else if(escolha == 'c' || escolha == 'C')
	{
		printf("Resposta errada!\nA resposta correta eh letra B.\n\n");
	}
	
	system("pause");
	system("cls");
	
	printf("Segunda pergunta:\n1. Atualmente, quantos elementos quimicos a tabela periodica possui?\n\n");
	printf("A. 128\nB. 108\nC. 118\n");
	scanf("%s", &escolha);
	
	if(escolha == 'a' || escolha == 'A'){
		printf("Resposta errada!\nA resposta correta eh letra C.\n\n");
	}
	else if(escolha == 'b' || escolha == 'B')
	{
		printf("Resposta errada!\nA resposta correta eh letra C.\n\n");
	}
	else if(escolha == 'c' || escolha == 'C')
	{
		printf("Resposta correta!!\n\n");
	}
	
	system("pause");
	system("cls");
	
	printf("Segunda pergunta:\n1. Quanto tempo a luz do Sol demora para chegar a Terra?\n\n");
	printf("A. 12 minutos\nB. 8 minutos\nC. 24hrs\n");
	scanf("%s", &escolha);
	
	if(escolha == 'a' || escolha == 'A')
	{
		printf("Resposta errada!\nA resposta correta eh letra B.\n\n");
	}
	else if(escolha == 'b' || escolha == 'B')
	{
		printf("Resposta correta!!\n\n");
	}
	else if(escolha == 'c' || escolha == 'C')
	{
		printf("Resposta errada!\nA resposta correta eh letra B.\n\n");
	}
	
	system("pause");
	
}


void adivinha()
{
	int i, tentativa, numero;
		
	srand(time(NULL));
		
	printf("Numero sorteado! ENTER para comecar\n\n");
	i = rand() % 1001;
	
	for(tentativa = 1; tentativa <= 5 && numero != i; tentativa++)
	{
		
		printf("Tentativa %d: ", tentativa);
		scanf("%d", &numero);
		
		if(numero > i)
		{
			printf("Tente um numero menor!\n\n");
		}
		else if(numero < i)
		{
			printf("Tente um numero maior!\n\n");
    	}
		else
		{
    		printf("Voce acertou! O numero sorteado eh %d\n\n", i);
		}
	}
	if(numero != i)
		{
			printf("Suas tentativas acabaram! O numero sorteado era %d\n", i);
	
		}
	
}

void olho_cobra ()
{
	
	char nome_1[50], nome_2[50];
	char jogador_1[50], jogador_2[50];
	int i;
	int pontos_total_jogador_1 = 0, pontos_total_jogador_2 = 0; 
	int pontos_turno_jogador_1 = 0, pontos_turno_jogador_2 = 0;
	int dado_1;
	int dado_2;
	int resposta = 1,resposta_2 = 1;
	int sorteio;
	int maior_pontuacao;
	
	printf("digite o nome do primeiro jogador:");
	scanf("%s", nome_1);
	printf("digite o nome do segundo jogador:");
	scanf("%s", nome_2);
	
	srand(time(NULL));
	sorteio = rand() %2;
	
	if(sorteio == 0)
	{
		strcpy(jogador_1,nome_1);
		strcpy(jogador_2,nome_2);
	}
	else
	{
		strcpy(jogador_2,nome_1);
		strcpy(jogador_1,nome_2);
	}
	
	while(maior_pontuacao <= 50)
	{
		if(pontos_total_jogador_1 > pontos_total_jogador_2)
		{
			maior_pontuacao = pontos_total_jogador_1;
		}
		else 
		{
			maior_pontuacao = pontos_total_jogador_2;
		}
		if(maior_pontuacao >= 50)
		{
			break;
		}
		
		printf("\nturno do(a) %s\n",jogador_1);
		dado_1 = (rand() %6) + 1;
		dado_2 = (rand() %6) + 1;
		printf("\n\nos dois primeiros dados sao:\n\n %i %i\n",dado_1, dado_2);
		pontos_turno_jogador_1 = dado_1 + dado_2;
		resposta = 1;
		
		while(resposta == 1)
		{
			printf("\n%s, gostaria de jogar de novo?\ndigite 1 para sim e 2 para nao.\n",jogador_1 );		
			scanf("%i",&resposta);
			
			 if(resposta == 2)
			{
				pontos_total_jogador_1 = pontos_turno_jogador_1 + pontos_total_jogador_1;
				printf("seu turno acabou,seus pontos atuais sao iguais a:%i\n",pontos_total_jogador_1);
				printf("\n\n-----------------------------------------------------------------------------------\n\n");
				break;
			}
			else if(resposta == 1)
			{
				dado_1 = (rand() %6) + 1;
				dado_2 = (rand() %6) + 1;
				printf("os dados da vez sao:\n %i %i\n",dado_1, dado_2);
			
				 if(dado_1 == 1 && dado_2 == 1)
				{
					pontos_total_jogador_1 = 0;
					printf("os pontos do %s sao: %i", jogador_1, pontos_total_jogador_1);
					printf("\n\n-----------------------------------------------------------------------------------\n\n");
					break;
				}
				else if(dado_1 == 1 || dado_2 == 1)	
				{
					printf("seu turno acabou,seus pontos atuais sao iguais a:%i\n",pontos_total_jogador_1);
					printf("\n\n-----------------------------------------------------------------------------------\n\n");
					break;
				}
				else
				{
					pontos_turno_jogador_1 = dado_1 + dado_2 + pontos_turno_jogador_1;
				}	
			} 
		}
		 if(pontos_total_jogador_1 >= 50)
			{
				printf("\n\nparabens %s, vc ganhou.",jogador_1);
				break;
			} 
	
		
		printf("\nturno do(a) %s\n",jogador_2);
		dado_1 = (rand() %6) + 1;
		dado_2 = (rand() %6) + 1;
		printf("\n\nos dois primeiros dados sao:\n\n %i %i\n",dado_1, dado_2);
		pontos_turno_jogador_2 = dado_1 + dado_2;
		resposta_2 = 1;
		
		while(resposta_2 == 1)
		{
			
			printf("\n%s, gostaria de jogar de novo?\ndigite 1 para sim e 2 para nao.\n",jogador_2 );		
			scanf("%i",&resposta_2);
			
			 if(resposta_2 == 2)
			{
				pontos_total_jogador_2 = pontos_turno_jogador_2 + pontos_total_jogador_2;
				printf("seu turno acabou,seus pontos atuais sao iguais a:%i\n",pontos_total_jogador_2);
				printf("\n\n-----------------------------------------------------------------------------------\n\n");
				break;
			}
			else if(resposta_2 == 1)
			{
				dado_1 = (rand() %6) + 1;
				dado_2 = (rand() %6) + 1;
				printf("os dados da vez sao:\n %i %i\n",dado_1, dado_2);
				
				if(dado_1 == 1 && dado_2 == 1)
				{
					pontos_total_jogador_2 = 0;
					printf("os pontos do(a) %s sao: %i", jogador_2, pontos_total_jogador_2);
					printf("\n\n-----------------------------------------------------------------------------------\n\n");
					break;
				}
				else if(dado_1 == 1 || dado_2 == 1)	
				{
					printf("seu turno acabou,seus pontos atuais sao iguais a:%i\n",pontos_total_jogador_2);
					printf("\n\n-----------------------------------------------------------------------------------\n\n");
					break;
				}
				else
				{
					pontos_turno_jogador_2 = dado_1 + dado_2 + pontos_turno_jogador_2;
				}
				
			}
			
		}
		if(pontos_total_jogador_2 >= 50)
			{
				printf("\n\nparabens %s, vc ganhou.",jogador_2);
			}
	
	}
	

}
	
int main()
{
	
	int opc, i;
	menu:
	system("cls");
	printf("Bem-vindo ao aplicativo de jogos!\nNesse aplicativo existem 3 jogos, escolha a um dos jogos e divirta-se.\n");
	printf("1. Pergunta e resposta.\n2. Adivinhe o numero.\n3. Olho de cobra.\n4. Sair\n");
	scanf("%d", &opc);
	
	switch(opc)
	{
		case 1:
			inicio_1:
			system("cls");
			perguntas();
			printf("\nDeseja jogar de novo? Digite 1 ou 2\n1. Sim.\n2. Nao.\n");
			scanf("%d", &i);
			
			if(i == 1)
			{
				goto inicio_1;
			}
			else if(i == 2)
			{
				goto menu;
			}
			break;
			
		case 2:
			inicio_2:
			system("cls");
			adivinha();
			printf("\nDeseja jogar de novo? Digite 1 ou 2\n1. Sim.\n2. Nao.\n");
			scanf("%d", &i);
			
			if(i == 1)
			{
				goto inicio_2;
			}
			else
			{
				goto menu;
			}
		case 3:
			inicio_3:
			system("cls");
			olho_cobra();
			printf("\nDeseja jogar de novo? Digite 1 ou 2\n1. Sim.\n2. Nao.\n");
			scanf("%d", &i);
			
			if(i == 1)
			{
				goto inicio_3;
			}
			else
			{
				goto menu;
			}
		case 4:
			printf("\nFinalizando...");	
	 	break;
	}

}
	
	
