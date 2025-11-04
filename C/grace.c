#include <stdio.h>

#define FT()int main(){char *to_print="#include<unistd.h>%c%c#define FT(x)int main(){char *to_print=%c%s%c; printf(to_print, 10, 10, 34, to_print, 34, 10, 10);}%c%cFT()"; printf(to_print, 10, 10, 34, to_print, 34, 10, 10);}

FT()
