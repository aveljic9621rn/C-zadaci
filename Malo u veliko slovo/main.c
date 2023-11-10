#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    scanf("%c", &c);
    int konstanta = 'a' - 'A';
    printf("%c", c - konstanta);
    return 0;
}
