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
		if (c == '#'){
			while (c != '\n'){
				fputc(c, f1);
				c = fgetc(f);
			}
			fputc(c, f1);
			continue;
		}
		if (!isspace(c))
		{
			fputc(c, f1);
		}
		else{
			switch(c){
				case '\n':
				case '\t':
					break;
				default:
					fputc(c, f1);
			}
		}
		c = fgetc(f);
	}
	fclose(f);
}