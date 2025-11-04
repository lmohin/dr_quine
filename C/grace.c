#include <stdio.h>

/*
  This is a useless comment
*/

#define FT()int main(){char *to_print="#include <unistd.h>%c%c/*%c  This is a useless comment%c*/%c%c#define FT()int main(){char *to_print=%c%s%c; FILE *f = fopen(%cGrace_kid.c%c, %cw%c); fprintf(f, to_print, 10, 10, 10, 10, 10, 10, 34, to_print, 34, 34, 34, 34, 34, 10, 10);}%c%cFT()"; FILE *f = fopen("Grace_kid.c", "w"); fprintf(f, to_print, 10, 10, 10, 10, 10, 10, 34, to_print, 34, 34, 34, 34, 34, 10, 10);}

FT()
