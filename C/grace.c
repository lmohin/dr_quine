#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*
  This is a quine
*/

#define WRITE_ME(to_print, f_adr) fprintf(f_adr, to_print, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, to_print, 34, 34, 34, 34, 34, 34, 92, 110, 34, 10, 10, 10);

#define ERROR(error_message) write(2, error_message, strlen(error_message)); return (1);

#define FT()int main(){char *to_print="#include <stdio.h>%c#include <unistd.h>%c#include <string.h>%c%c/*%c  This is a quine%c*/%c%c#define WRITE_ME(to_print, f_adr) fprintf(f_adr, to_print, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, to_print, 34, 34, 34, 34, 34, 34, 92, 110, 34, 10, 10, 10);%c%c#define ERROR(error_message) write(2, error_message, strlen(error_message)); return (1);%c%c#define FT()int main(){char *to_print=%c%s%c; FILE *f_adr = fopen(%cGrace_kid.c%c, %cw%c); if (!f_adr){ERROR(%cError while writing to Grace_kid.c, check rights%c%c%c)}; WRITE_ME(to_print, f_adr)}%c%cFT()%c"; FILE *f_adr = fopen("Grace_kid.c", "w"); if (!f_adr){ERROR("Error while writing to Grace_kid.c, check rights\n")}; WRITE_ME(to_print, f_adr)}

FT()
