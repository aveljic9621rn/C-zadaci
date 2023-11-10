#include <stdio.h>
#include <stdlib.h>
/**Napisati program koji iz datog niza A,
 duzine N, pronalazi element koji se najviše puta pojavljuje.
  Ispisati element i broj ponavljanja tog elementa.
NAPOMENA Ukoliko dva elementa ili vise elemenata ima istu učestalost,
ispisati najmanji element.
Ukoliko se element 1 pojavljuje 2 puta i element 2 pojavaljuje 2 puta program ispisuje 1*/
int main()
{
    int n, i, j, br = 1, brElem = 0, max;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);


    for(i = 0; i < n; i++)
    {

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                br++;
        }
    }
    if (br > brElem || (br == brElem && max > a[i]))
    {
        max = a[i];
        brElem = br;
    }
   printf("Najcesce se ponavlja broj %d, %d puta", max, brElem);

    return 0;

}
