#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"

int main()
{
    double moy = average(12, 4, 7);
    printf("La moyenne de 12, 4 et 7 est : %.2f\n", moy);
    int result = add(9, 47);
    printf("La somme de 9 et 47 est : %d\n", result);
	print_str("Bonjour\n");
	exit(0);
}