#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj, izvrnutiBroj,h,s,d,j;
    scanf("%d", &broj);
    h= broj / 1000;
    s= (broj / 100) % 10;
    d= (broj / 10) % 10;
    j= broj % 10;
    izvrnutiBroj= ((j * 1000) + (d * 100) + (s * 10) + h);
    printf("%d", izvrnutiBroj);
    return 0;
}
