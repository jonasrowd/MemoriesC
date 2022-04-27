#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main (){

	char player1[100];
	char player2[100];
	int result, p1, p2, imparPar = 0;

	printf("Par ou Ímpar.\n");

	printf("Nome do Player 1.\n");
	scanf("%s", &player1);

	printf("Digite 1 para ímpar ou 2 para par.\n");
	scanf("%d", &imparPar);

	system("cls");

	if(imparPar==1){
		printf("%s sera Par.\n", player1);
	}else{
		printf("%s sera Impar\n", player1);
	}

	printf("Nome do Player 2.\n");
	scanf("%s", &player2);

	if(imparPar==1){
		printf("%s sera Par.\n", player2);
	}else{
		printf("%s sera Impar.\n", player2);
	}

	system("cls");

	printf("%s Vs. %s", player1, player2);

	printf("%s escolha seu número.\n", &player1);
	scanf("%d", &p1);

	system("cls"); // comando que limpa a tela

	printf("%s escolha seu número.\n", &player2);
	scanf("%d", &p2);

	system("cls"); // comando que limpa a tela

	printf("Avaliando...\n\n");

	result = p1 + p2;

	// Duas formas de se construir o if, com else if ou aninhado.
	if((result%2==0) && (imparPar==1)){
		printf("%s foi o vencedor, o resultado foi par.\n", player2);
	}else if ((result%2 == 0) && (imparPar==2)){
		printf("%s foi o vencedor, o resultado foi par.\n", player1);
	}else{
		if(imparPar==1){
			printf("%s foi o vencedor, o resultado foi impar.\n", player1);
		}else{
			printf("%s foi o vencedor, o resultado foi impar.\n", player2);
		}
	}
	return 0;
}
