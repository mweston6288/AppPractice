#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	char *array;
	int decimal = 0;
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

	// read each character one at a time.
	// if any value is not 1 or 0, string is invalid
	for (int i = 0; i < size; i++){
		if (array[i] != '1' && array[i] != '0'){
			printf("Invalid string\n");
			return 0;
		// left shift decimal and then add the new bit to the end
		} else{
			decimal <<= 1;
			decimal += (int)array[i] - '0';
		}
	}
	printf("%d\n", decimal);
	free(array);
}