#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int mat[n][n];
    for(i = 0; i < n; i++, printf("\n")){
         for(j = 0; j < n; j++){
            if(i == j)
                printf("2");
            if(i > j)
                printf("3");
            if(i < j)
                printf("1");
         }
    }
    return 0;
}
