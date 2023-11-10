#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    while(a >= b){
        a -= b;
        c++;
    }
    printf("Kolicnik pri deljenju je : %d", c);
    putchar('\n');
    printf("Ostatak pri deljenju je : %d", a);
    return 0;
}
