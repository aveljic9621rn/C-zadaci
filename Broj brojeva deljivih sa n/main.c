#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i;
    int br = 0;
    for(i = 1; i < 1001; i++)
    {
        if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            br++;
    }
    printf("%d", br);
    return 0;
}
