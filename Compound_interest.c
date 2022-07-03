#include <stdio.h>
#include <math.h>

int main()
{
    double p, r, t;
    double ci;
    scanf("%lf", &p);
    scanf("%lf", &r);
    scanf("%lf", &t);

    ci = p*(pow((1.0 + r / 100),t)) ;

    printf("%.2lf",ci);

    return 0;
}