#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	char *array;
	// get size of binary from user.
	// if user input is not a number, pritn invalid and ask again
	printf("Number of bits: ");
	while (!scanf("%d", &size)){
		printf("Invalid\n");
		while (getchar() != '\n');
		printf("Number of bits: ");
	}
	// setup and cleanup
	array = malloc(sizeof(char) * (size + 1));
	while (getchar() != '\n');
	// get binary string
	printf("Enter your binary string: ");
	fgets(array, size+1, stdin);
	printf("%s", array);
	free(array);
}