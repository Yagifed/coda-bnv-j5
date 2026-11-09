#include <stdlib.h>
#include <stdio.h>

double add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(5, 3);
    printf("La somme de 5 et 3 est : %d\n", result);
    exit(0);
}