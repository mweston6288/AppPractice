#include <stdio.h>

int main(){
	int size;
	char *array;

	printf("Number of bits: ");
	while (!scanf("%d", &size)){
		printf("Invalid\n");
		while (getchar() != '\n');
		printf("Number of bits: ");
	}
	printf("Number of bits: ");

	printf("%d\n", size);
	printf("Enter your binary string: ");

	//array = malloc(sizeof(char) * size);
}