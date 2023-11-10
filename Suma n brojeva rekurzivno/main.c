#include <stdio.h>
#include <stdlib.h>


int sum_rek(int n){
if(n==0)
    return 0;

return n+sum_rek(n-1);
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d",sum_rek(n));
    return 0;
}
