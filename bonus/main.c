#include <stdlib.h>
#include <stdio.h>
#include "add.h"

int main()
{
    int somme = 0;
    int nb = 1;
    while (nb != 0)
    {
        printf("Saisissez un nombre\n");
        scanf("%d", &nb);
        somme = add(somme, nb);
        printf("Somme actuelle: %d\n", somme);
    }
	printf("Fin des operations\n");
	exit(0);
}
