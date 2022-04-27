#include <stdio.h>
#include <stdlib.h>

int main (){

	char firstName[100];
	char lastName[100];
	int age = 0;

	printf("Olá senhor, como quer ser chamado?\n");
	scanf("%s\n",firstName);
	printf("Muito prazer Senhor %s\n",firstName);

	printf("Qual é o seu sobrenome?");
	scanf("%s\n",lastName);
	printf("Ótimo, Senhor %d %e.\n",firstName,lastName);

	printf("Qual a sua idade?\n");
	scanf("%d\n",&age);

	printf("Obrigado pelas informações.\n");

	return 0;

}
