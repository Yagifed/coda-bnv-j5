#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"

int main()
{
    double moy = average(5, 3, 9);
    printf("La moyenne de 5, 3 et 9 est : %.2f\n", moy);
    int result = add(5, 3);
    printf("La somme de 5 et 3 est : %d\n", result);
	print_str("Bonjour\n");
	exit(0);
}