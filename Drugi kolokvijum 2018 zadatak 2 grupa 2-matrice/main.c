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
    int i;
    for(i = 0; i < num_of_digits; i++)
    {
        niz [i]= n % 10;
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
    printf("Jebo sam ti mater sto ne radis\n");
    for(i = 0; i < num; i++)
    {
        for(j = 0; j < num; j++)
        {
            if(i == j || i + j == n - 1)
            {
                mat[i][j] = niz[j];

            }

        }
    }
    for(i = 0; i < num; i++, printf("\n"))
    {
        for(j = 0; j < num; j++)
        {
            printf("%d\t", mat[i][j]);

        }


    }
    return 0;
}
