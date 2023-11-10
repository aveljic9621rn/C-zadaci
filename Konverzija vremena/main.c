#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj, sati, minuti, sekunde;
	scanf("%d", &broj);

	sati = (broj/3600);

	minuti = (broj -(3600*sati))/60;

	sekunde = (broj -(3600*sati)-(minuti*60));

	printf("%d %d %d",sati,minuti,sekunde);

    return 0;
}
