#include <stdio.h>
#include <stdlib.h>

int main(){

	int rock = 1;
	int papper = 2;
	int scissors = 3;
	int choice1, choice2, count1, count2, counter = 0;
	char player1[100];
	char player2[100];

	printf("Jogo Pedra, Papel ou Tesoura.");

	printf("Nome do Jogador 1:\n");
	scanf("%s", &player1);

	printf("Digite 1 para pedra, 2 para papel ou 3 para tesoura.\n");
	scanf("%d", &choice1);

	system("cls");

	printf("Nome do Jogador 2.\n");
	scanf("%s", &player2);

	printf("Digite 1 para pedra, 2 para papel ou 3 para tesoura.\n");
	scanf("%d", &choice2);

	system("cls");

	printf("%s Vs. %s", player1, player2);

	system("cls");

	while(1){
		printf("Avaliando...\n\n");

		if(choice1 == 1){
			if(choice2 ==1){
				printf("Empate, os dois jogadores escolheram a pedra.");
			}else if (choice2 == 2){
				printf("Jogador %s vence pedra com o papel.", player2);
				count2++;
			}else{
				printf("Jogador %s vence tesoura com a pedra.", player1);
				count1++;
			}
		}else if (choice1 == 2){
			if(choice2 ==1){
				printf("Jogador %s vence pedra com o papel.", player1);
				count1++;
			}else if (choice2 == 2){
				printf("Empate, os dois jogadores escolheram papel.");
			}else{
				printf("Jogador %s vence papel com a tesoura.", player2);
				count2++;
			}
		}else if (choice1 == 3){
			if(choice2 ==1){
				printf("Jogador %s vence tesoura com a pedra.", player2);
				count2++;
			}else if (choice2 == 2){
				printf("Jogador %s vence papel com a tesoura.", player1);
				count1++;
			}else{
				printf("Empate, os dois jogadores escolheram a tesoura.");
			}
		}

		printf("O placar está em: %s com %d pontos e %s com %d pontos.\n\n", player1, count1,player2,count2);

		printf("Gostariam de jogar novamente?\nEscolha 1 para Sim ou 2 para Não.");
		scanf("%d", &counter);

		if(counter==2){
			printf("Placar Final: %s com %d pontos e %s com %d pontos.\n\n", player1, count1,player2,count2);
			break;
		}
	}

	printf("Obrigado por jogar.");

	return 0;
}
