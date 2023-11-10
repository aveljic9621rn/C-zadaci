#include <stdio.h>
#include <stdlib.h>


int fac_rec(int n){
if(n==0)
    return 0;

return n*fac_rec(n-1);
}


int main()
{
   int n;
    scanf("%d",&n);
    printf("%d", fac_rec(n));
return 0;
}
