#include<stdio.h>#include<stdlib.h>#include<ctype.h>intmain(intargc,char**args){FILE*f=fopen(args[1],"r");FILE*f1=fopen("output.c","w");if(f==NULL){printf("Filenotfound");return0;}charc;do{c=fgetc(f);if(!isspace(c)){fputc(c,f1);}}while(c!=EOF);fclose(f);}�