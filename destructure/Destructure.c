#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char **args){
	FILE *f = fopen(args[1], "r");
	FILE *f1 = fopen("output.c", "w");
	if (f == NULL){
		printf("File not found");
		return 0;
	}
	char c;
	c = fgetc(f);

	while (c != EOF){
		if (!isspace(c))
		{
			fputc(c, f1);
		}
		c = fgetc(f);
	}
	fclose(f);
}