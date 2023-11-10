#include <stdio.h>
#include <stdlib.h>
/**Napisati program koji za dati niz A, dužine N ispisuje najduži palindromski podniz.
Palindromski podniz je niz uzastopnih elemenata nekog niza
 za koje vazi da se isto čita sa obe strane.
NAPOMENA: Ukoliko dva palindromska podniza imaju isti broj elemenata,
ispisati palindromski podniz koji se prvo pojavljuje.*/

int isPalindrome(int x , int y, int a[]){
int i, j;
for(i = x, j = y; i < j; i++, j--){
    if(a[i] != a[j])
        return 0;
}
return 1;
}


int main()
{
    int n, i ,j, niz[100], len = 0, start = 0, end = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &niz[i]);
    }
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n ; j++){
            if(isPalindrome(i, j, niz)){
                if(j - i + 1 > len){
                 len = j - i + 1 ;
                  start = i;
                  end = j;
                }
            }
        }
    }
    for(i = start; i <= end;i++){
        printf("%d ", niz[i]);
    }
    return 0;
}
