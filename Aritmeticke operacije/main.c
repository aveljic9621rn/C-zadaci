#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,zbir,razlika,proizvod,kolicnik,ostatak;
    scanf("%d %d", &a, &b);
    zbir = a + b;
    razlika = a - b;
    proizvod = a * b;
    kolicnik = a / b;
    ostatak = a % b;
    printf("%d %d %d %d %d",zbir,razlika,proizvod,kolicnik,ostatak);
    return 0;
}
