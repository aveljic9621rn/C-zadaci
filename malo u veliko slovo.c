#include <stdio.h>
#include <stdlib.h>

int main()
{
    char slovo;
    int konstanta = 'a' - 'A';

    scanf("%c", &slovo);

    printf("%c", slovo - konstanta);

    return 0;
}
