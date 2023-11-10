#include <stdio.h>
#include <stdlib.h>


void sortiraj (int a[], int n){
    int idx_min;
    for(int i=0; i<n; i++){
        idx_min = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[idx_min])
                idx_min = j;
        }

        int pom = a[i];
        a[i] = a[idx_min];
        a[idx_min] = pom;
    }
}
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int pom;

    int niz[n];
    for(i = 0; i < n; i++){
        scanf("%d", &niz[i]);
    }

        sortiraj(niz , n);

    for(i = 0; i < n; i++){
        printf("%d ", niz[i]);
    }
    return 0;
}
