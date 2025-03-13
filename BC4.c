#include <stdio.h>
#define _USE_MATH_DEFINES // (2)
#include <math.h>

int main()
{
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);   // merchants rounding method
    int D = ceil(3.14);    // rounds up
    int E = floor(3.99);   // rounds down
    double F = fabs(-100); // modulus
    double G = log(M_E);   // base of e: neper log
    // if M_E undefined, (1) add this flag: -lm or (2)
    printf("ln of e is %lf\n", G);
    double H = sin(0.5 * M_PI);
    double I = cos(M_PI);
    double J = tan(M_PI / 4);
    printf("%lf %lf %lf\n", H, I, J);
}