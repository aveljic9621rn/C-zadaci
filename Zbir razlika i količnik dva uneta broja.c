#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;

    scanf("%f%f", &a, &b);

    float zbir, razlika, kolicnik;

    zbir = a + b;
    razlika = a - b;
    kolicnik = 1.0 * a / b;

    printf("%.2f %.2f %.2f", zbir, razlika, kolicnik);

    return 0;
}
