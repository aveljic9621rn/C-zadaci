#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2;
    float rastojanje;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    rastojanje = sqrt((pow(x2,2) - pow(x1,2)) + (pow(y2,2) - pow(y1,2)));
    printf("%.2f", rastojanje);
    return 0;
}
