#include <stdio.h>
#include <stdlib.h>
/** Napisati program koji za dati niz A,
dužine N, ispisuje svaki element u suprotnom redosledu.*/
int main()
{
    int n;
    scanf("%d",&n);
    int niz[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &niz[i]);
    }
    for(i = n - 1 ; i >= 0; i--){
        printf("%d ", niz[i]);
    }
    return 0;
}
