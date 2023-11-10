#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stope;
    float centimetri;
    scanf("%d",&stope);
    centimetri = (stope * 30.48);
    printf("%.2f", centimetri);
    return 0;
}
