#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 1, f = 1;
    scanf("%d", &n);
    while(i <= n){
        f = f * i;
        i++;
    }
    printf("%d", f);
    return 0;
}
