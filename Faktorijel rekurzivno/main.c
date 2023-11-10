#include <stdio.h>
#include <stdlib.h>


int fac_rec(int n){
if(n==1)
    return 1;

return n*fac_rec(n-1);
}


int main()
{
   int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ", fac_rec(i));
    }

return 0;
}
