#include <stdlib.h>
#include <stdlib.h>

int main() {
	int horaCinema = 19;
	int horaAtual = 16;

	if (horaCinema==horaAtual){
		printf("Pode entrar, o horario e o mesmo.\n");
	}else if (horaCinema<horaAtual){
		printf("Esta atrasado! Corre!\n");
	}else {
		printf("Voce chegou mais cedo.\n");
	}
	return 0;
}
