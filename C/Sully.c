#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	char *toPrint = "#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%c%cint main(void){%c	char *toPrint = %c%s%c;%c	int i = %d;%c	if (access(%cSully_5.c%c, F_OK)){i += 1;}%c	char sully_code[10] = %cSully_X.c%c;%c	char sully_exec[12] = %cSully_X.exe%c;%c	sully_code[6] = '0' + i - 1;%c	sully_exec[6] = '0' + i - 1;%c	FILE *f_adr = fopen(sully_code, %cw%c);%c	fprintf(f_adr, toPrint, 10, 10, 10, 10, 10, 34, toPrint, 34, 10, i - 1, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 34, 37, 115, 37, 115, 34, 10, 10, 10, 10);%c	fclose(f_adr);%c	if (i - 1 <= 0){return 0;}%c	char compile_line[30];%c	sprintf(compile_line, %cgcc %c%c -o %c%c%c, sully_code, sully_exec);%c	system(compile_line);%c	system(sully_exec);%c}%c";
	int i = 5;
	if (access("Sully_5.c", F_OK)){i += 1;}
	char sully_code[10] = "Sully_X.c";
	char sully_exec[12] = "Sully_X.exe";
	sully_code[6] = '0' + i - 1;
	sully_exec[6] = '0' + i - 1;
	FILE *f_adr = fopen(sully_code, "w");
	fprintf(f_adr, toPrint, 10, 10, 10, 10, 10, 34, toPrint, 34, 10, i - 1, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 34, 37, 115, 37, 115, 34, 10, 10, 10, 10);
	fclose(f_adr);
	if (i - 1 <= 0){return 0;}
	char compile_line[30];
	sprintf(compile_line, "gcc %s -o %s", sully_code, sully_exec);
	system(compile_line);
	system(sully_exec);
}
