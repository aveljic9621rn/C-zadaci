#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    srand(time(0));
    int slucajan = rand() % n;
    printf("%d", slucajan);
    return 0;
}
