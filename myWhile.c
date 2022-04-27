#include <stdio.h>
#include <stdlib.h>

int main(){

	int counter = 1;
	int limit	= 100;

	while(counter <= limit){
		printf("%d\n", counter);
		if(counter == 5){
			int counter2 = 5;
			while(counter2 <= 5){
				printf("%d\n", counter2);
				counter2--;
			}
		}
		counter++;
	}
	return 0;
}
