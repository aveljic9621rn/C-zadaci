#include <stdio.h>
#include <stdlib.h>

int num_of_digits(int n)
{
    int num;
    while(n)
    {
        n /= 10;
        num++;
    }
    return num;
}
void digits_of_num(int n, int niz[20])
{
    int i = 0, m = num_of_digits(n);
    while(n)
    {
        niz[i] = n % 10;
        i++;
        n /= 10;

    }




}
int main()
{
    int n, i, j, niz[50], mat[50][50];
    scanf("%d", &n);
    int m = num_of_digits(n);
    digits_of_num(n, niz);
    for(i = 0; i < m; i++, printf("\n"))
    {
        for(j = 0; j < m; j++)
        {
            if(i == 0)
            {
                mat[i][j] = niz[j];
            }
            if(i % 2 == 0)
            {
                if(mat[i][j] - 2 < 0)
                {
                    mat[i][j] = 10;
                    mat[i][j] -=2;
                }
            else{
                  if(mat[i][j] - 2 < 0)
                {
                    mat[i][j] = 10;
                    mat[i][j] -=1;
                }
                }
            }
        }
    }



    for(i = 0; i < m; i++, printf("\n"))
    {
        for(j = 0; j < m; j++)
        {
            printf("%d", mat[i][j]);
        }
    }

    return 0;

}
