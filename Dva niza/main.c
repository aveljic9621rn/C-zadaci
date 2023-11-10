#include <stdio.h>
#include <stdlib.h>
/**Napisati program koji za uneti niz A, duzine N,
formira nizove B i C
tako da su elementi niza B parni članovi niza A,
a elementi niza C su neparni članovi niza A.*/
int main()
{
    int n, i, brb = 0, brc = 0;
    scanf("%d", &n);
    int a[n],b[n],c[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        {
            b[brb] = a[i];
            brb++;
        }
        else
        {
            c[brc] = a[i];
            brc++;
        }
    }

    printf("Niz B :\n");
    for(i = 0; i < brb; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    printf("Niz C :\n");
    for(i = 0; i < brc; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
