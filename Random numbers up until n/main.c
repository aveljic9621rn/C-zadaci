#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num, i, a;
    scanf("%d %d", &n, &num);
    for(i = 0; i < n;i++){
        a = srand(time);
        printf("%d", a);
    }
    return 0;
}
