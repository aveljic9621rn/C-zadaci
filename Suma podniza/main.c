#include <stdio.h>
#include <stdlib.h>
/**Napisati program koji iz datog niza A, dužine N,
pronalazi podniz uzastopnih elemenata niza A
sa najvećom sumom elemenata.
Ispisati sumu tog podniza.
NAPOMENA Podniz niza A čine uzastopni elementi niza A Bar jedan element niza A će biti pozitivan
Ulaz
3
7 6 5
Izlaz
18
*/

int sum(int x,int y, int* niz)
{
    int i, zbir = 0;
    for(i = x; i <= y; i++)
    {
        zbir += niz[i];

    }
    return zbir;
}

int main()
{
    int n,max = 0,i ,j, x, y, niz[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &niz[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if (i == 0 && j == 1 || (sum (i,j,niz)) > max)
            {
                max = sum(i, j, niz);
            }
        }
    }
    printf("%d", max);
    return 0;
}
