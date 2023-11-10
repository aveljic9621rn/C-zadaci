#include <stdio.h>
#include <stdlib.h>


int pow(int n, int stepen){
if(stepen==0)
return 1;
return n*pow(n,stepen-1);

}

int main()
{
    int n, stepen;
    scanf("%d %d", &n, &stepen);
    printf("%d", pow(n,stepen));
    return 0;
}
