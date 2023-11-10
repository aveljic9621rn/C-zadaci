#include <stdio.h>
#include <stdlib.h>


int sum_digit_rec(int n){
    if(n==0)
        return 0;
    if(n<10)
        return n;
    return n % 10 + sum_digit_rec(n/10);


}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d",sum_digit_rec(n));
    return 0;
}
