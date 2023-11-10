
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fRec(int down, int up, int counter)
{
    if(down == 2)
        return sqrt((double) (counter % 2 == 0 ? 1 : up)/down);

    if(counter % 2 != 0)
        return sqrt( (double) up/down + rek(down - 2, up - 9,counter + 1));
    else
        return sqrt( (double) 1 / down + rek (down - 2, up, counter + 1));

}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%lf", rek(2 * n, n * 10 + 1, 1));

    return 0;
}
