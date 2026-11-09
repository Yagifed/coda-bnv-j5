#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"

double add(int a, int b)
{
    return a + b;
}

double average(double a, double b, double c)
{
    return (a + b + c)/3 ;
}

void print_str(char *str)
{
    printf("%s", str);
}
