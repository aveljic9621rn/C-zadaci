#include <stdio.h>
#include <stdlib.h>

/**Napisati program koji iz datog niza A, dužine N, izvršava K levih rotacija na nizu.
 Leva rotacija je operacija na nizu dužine N koji pomera elemente niza u levo.
Na primer, ako se na niz {1, 2, 3, 4, 5} izvrse 2 leve rotacije,
onda niz postaje {3, 4, 5, 1, 2}*/

int main()
{
    int n, i, j, k;
    scanf("%d %d", &n, &k);
    int niz[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &niz[i]);
    }
    k = k % n;
    for(k; k >= 1; k--)
    {
        int temp = niz[0];
        for(i = 0; i < n - 1; i++)
        {
            niz[i] = niz[i + 1];
        }
        niz[n - 1] = temp;

    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", niz[i]);
    }
    return 0;
}
