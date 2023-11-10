#include <stdio.h>
#include <stdlib.h>


int fib_rec(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return (fib_rec(n-1)+ fib_rec(n-2));
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        printf("%d ",fib_rec(i));
    }
    return 0;
}
