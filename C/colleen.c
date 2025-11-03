#include <stdio.h>

void useless(void){return;}

/*Comment present outside of the program*/

int main(void){/*Comment present in the main function*/useless(); char *to_print = "#include <stdio.h>%c%cvoid useless(void){return;}%c%c/*Comment present outside of the program*/%c%cint main(void){/*Comment present in the main function*/useless(); char *to_print = %c%s%c;printf(to_print, 10, 10, 10, 10, 10, 10, 34, to_print, 34, 10);}%c";printf(to_print, 10, 10, 10, 10, 10, 10, 34, to_print, 34, 10);}
