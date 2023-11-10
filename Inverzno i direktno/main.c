#include <stdio.h>
#include <stdlib.h>

/*
Napisati rekurzivnu funkciju koja ispisuje prvih N
prirodnih brojeva u inverznom, pa u direktnom poretku.
    Primer:   4
    Rezultat: 4 3 2 1 1 2 3 4
*/

int inv_n_dir(int unos)
{
    printf("%d ", unos);

     if (unos > 1)
        inv_n_dir(unos - 1);

    printf("%d ", unos);

}

int main()
{
    int unos;

    scanf("%d",&unos);

    inv_n_dir(unos);

    return 0;
}
//JEBEM LI TI ZADATAK KOJI GA IZMISLI
