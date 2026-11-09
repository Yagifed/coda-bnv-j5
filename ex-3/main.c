#include <stdlib.h>
#include <stdio.h>

double average(double a, double b, double c)
{
    return (a + b + c)/3 ;
}

int main()
{
    double moy = average(5, 3, 9);
    printf("La moyenne de 5, 3 et 9 est : %.2f\n", moy);
    exit(0);
}