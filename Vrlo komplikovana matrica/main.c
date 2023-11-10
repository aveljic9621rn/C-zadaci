#include <stdio.h>
#include <stdlib.h>
int num_of_digits(int n)
{
    int num = 0;
    while(n > 0)
    {
        n /= 10;
        num++;
    }
    return num;
}
void digits_of_num(int n, int niz[20])
{
    int i = 0;
    while(n)
    {
        niz[i] = n % 10;
        i++;
        n /= 10;

    }


}




int main()
{
    int n, i, j;
    scanf("%d", &n);
    int mat[100][100];
    int niz [100];
    int num = num_of_digits(n);
    digits_of_num(n, niz);
    for (i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
            // Na glavnoj ili sporednoj dijagonali, pišu se cifre broja.
            if (i == j || i + j == num - 1)
                mat[i][j] = niz[j];
            // Izvan dijagonala piše se za broj manji od onog na dijagonali.
            else if (i < j && i + j < num - 1
                       || i > j && i + j > num - 1) {
                mat[i][j] = niz[j] - 1;

                if (mat[i][j] < 0)
                    mat[i][j] = 9;
            }
            // Između dijagonala piše se za broj veći nego onaj na dijagonali.
            else
                mat[i][j] = (niz[j] + 1) % 10;
        }
    }
    mat[i][j] = (niz[j] + 1) % 10;
    for(i = 0; i < num; i++, printf("\n"))
    {
        for(j = 0; j < num; j++)
        {
            printf("%d\t", mat[i][j]);

        }


    }

    return 0;
}

