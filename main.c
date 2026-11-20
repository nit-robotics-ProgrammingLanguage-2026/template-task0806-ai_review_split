#include <stdio.h>

void split_double(double d, int *int_part, double *frac_part);

int main(void)
{
    float val;
    int ipart;
    double fpart;
    scanf("%f", &val);
    split_double(val, &ipart, &fpart);
    printf("%d,%.4f", ipart, fpart);
    return 0;
}

void split_double(double d, int *int_part, double *frac_part)
{
    *int_part = d;
    *frac_part = d;
}
