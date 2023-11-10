#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    float zbir,razlika;
    scanf("%f %f",&a,&b);
    zbir = a + b;
    razlika = a - b;
    float kolicnik = (float) a/b;
    printf("%.2f %.2f %.2f",zbir,razlika,kolicnik);
    return 0;
}
