#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for(i = 0; i <= n; i++){
        //printf("%d\n", i);
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
