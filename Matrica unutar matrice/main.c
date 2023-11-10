#include <stdio.h>
#include <stdlib.h>
#define MAX 100
    /// Funkcija za učitavanje matrice kao argument može da primi matricu (početak matrice, niz nizova ili pokazivač na nizove)
/// i veličinu matrice (broj redova - n i broj kolona - m).
void ucitajMatricu(int mat[MAX][MAX], int *n, int *m) {
    int i, j;
    /// Ako učitavamo vrednost u adresu na pokazivaču, nema potrebe da stavljamo &.
    scanf("%d%d", n, m);
    /// Ali onda *n i *m su učitane vrednosti.
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++)
            scanf("%d", &mat[i][j]);
}

int main() {
    int i1, j1, i2, j2, n1, n2, m1, m2, flag;
    int a[MAX][MAX], b[MAX][MAX];
    /// Pošto hoćemo da imamo n1 i m1 i n2 i m2 iz funkcije
    /// prosledićemo njihove adrese a funkcija će raditi preko pokazivača.
    ucitajMatricu(a, &n1, &m1);
    ucitajMatricu(b, &n2, &m2);

    /// Prolazimo kroz svaki mogući "početak" unutrašnje matrice u spoljašnjoj.
    for(i1 = 0; i1 <= n1 - n2; i1++) {
        for(j1 = 0; j1 <= m1 - m2; j1++) {
            flag = 1;

            /// Za svako polje unutrašnje matrice moramo da proverimo da li se
            /// poklapa sa odgovarajućim poljem spoljašnje. Ako se ne poklapa, iskačemo (flag = 0).
            for(i2 = 0; i2 < n2 && flag; i2++) {
                for(j2 = 0; j2 < m2 && flag; j2++) {
                    if(a[i1 + i2][j1 + j2] != b[i2][j2])
                        flag = 0;
                }
            }
            /// Ako je flag ostao 1, znači da je unutrašnja matrica nađena.
            /// Ispisujemo DA i završavamo program.
            if(flag) {
                printf("DA\n");
                return 0;
            }
        }
    }
    /// Ako nismo našli, ispisujemo NE.
    printf("NE\n");

    return 0;
}
