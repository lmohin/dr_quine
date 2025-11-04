#include <stdio.h>

/*
  This is a useless comment
*/

#define FT()int main(){char *to_print="#include <unistd.h>%c%c/*%c  This is a useless comment%c*/%c%c#define FT()int main(){char *to_print=%c%s%c; printf(to_print, 10, 10, 10, 10, 10, 10, 34, to_print, 34, 10, 10);}%c%cFT()"; printf(to_print, 10, 10, 10, 10, 10, 10, 34, to_print, 34, 10, 10);}

FT()
