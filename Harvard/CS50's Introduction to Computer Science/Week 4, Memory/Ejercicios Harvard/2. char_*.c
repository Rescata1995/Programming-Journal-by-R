#include <stdio.h>

int main(void)
{
    char *s = "Hi!"; // reemplazo del tipo de dato "string" por el tipo de dato char * (hacen lo mismo, declarar cadenas de texto).

    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n\n", *(s+2));

    printf("%s\n", s);

    return 0;
}
