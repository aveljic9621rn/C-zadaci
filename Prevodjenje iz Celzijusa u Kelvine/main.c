#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celzijus, kelvin;
    scanf("%f", &celzijus);
    kelvin=(celzijus + 273.15);
    printf("%.1f", kelvin);
    return 0;
}
