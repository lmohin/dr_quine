#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 5;
	char s[10] = "Sully_X.c";
	s[6] = '0' + i;
	FILE *f_adr = fopen(s, "w");
	fprintf(f_adr, "#include <stdio.h>\nint main(void){printf(\"prout\");}");
	fclose(f_adr);
	system("gcc Sully_5.c -o b.exe");
	system("b.exe");
}
