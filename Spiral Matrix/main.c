#include <stdio.h>
#include <stdlib.h>

/**
Napisati program koji formira spiralnu matricu za zadatu veličinu matrice.

Primer: Ulaz
        4 6
        Izlaz
        1   2   3   4    5   6
        16  17  18  19   20  7
        15  24  23  22   21  8
        14  13  12  11   10  9
*/


// Proverava da li su koordinate i (vrsta) i j (kolona)
// unutar granica matrice (n i m).
int validneKoordinate(int i, int j, int n, int m) {
    return i >= 0 && j >= 0 && i < n && j < m;
}

int main() {
    int a[100][100];

    int i, j, m, n,
    // Broj koji upisujemo u polje i, j (prvi broj je 1).
    br = 1;

    // Promenljiva koja definiše smer kretanja. Pomeraji za svaki smer definisani su u
    // posebnim nizovima ispod
    int smer = 0;
    // Definišemo nizove koji predstavljaju pomeraje po x i po y.
    // Smerovi su 0: desno, 1: dole, 2: levo, 3: gore.
    // Pomeraji se dodaju na koordinate i i j
    // (i se krece po y-osi, j se krece po x-osi).
    int x[] = {1, 0, -1, 0};
    int y[] = {0, 1, 0, -1};

    // Učitavamo dimenziju matrice
    scanf("%d%d", &n, &m);

    // Inicijalizujemo celu matricu na 0 (prazno polje).
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            a[i][j] = 0;

    // Krećemo od gornjeg levog ugla (0,0).
    i = j = 0;
    // Popunjavaćemo matricu sve dok se ne popune sva polja (n*m).
    while(br <= n * m) {
        // Određujemo koje su potencijalne nove koordinate
        // tako što dodajemo pomeraje iz trenutnog smera.
        // Npr. ako je smer 0 (desno), i ostaje isto a j se povecava za 1.
        int ii = i + y[smer], jj = j + x[smer];

        // U trenutno polje upisujemo trenutni broj.
        a[i][j] = br++;

        // Odrediti sledeće polje za upisivanje
        // ako su validne koordinate iz trenutnog smera
        // i ako je prvo sledeće polje prazno.
        if (validneKoordinate(ii, jj, n, m) && a[ii][jj] == 0) {
            // Postavljamo nove vrednosti
            // koordinata i prelazimo na sledeću iteraciju.
            i = ii;
            j = jj;
            continue;
        }
        // Ako prethodni uslov nije bio ispunjen, treba promeniti smer.
        // Kada smer dođe do 4, %4 ga resetuje na 0.
        // Ažuriramo koordinate sa novim smerom.
        smer = (smer + 1) % 4;
        i = i + y[smer];
        j = j + x[smer];
    }

    // Ispisujemo generisanu matricu.
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%4d", a[i][j]);

        putchar('\n');
    }

    return 0;
}
