#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(4); // 4, no 3
    s[0] = 'H';
    s[1] = 'I';
    s[2] = '!';
    s[3] = '\0';
    printf("%s\n", s);

    free(s); // uso de función "free"

    return 0;
}

// novedades en comentarios
