#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nBC NOTES\n");
    char character = '%';
    printf("%c\t", character);
    char string[] = "qob.dob.dob.dop";
    printf("%s\t", string);
    float fltPt = 3.141592;            // 4 bytes - 6 or 7 digits - %f
    printf("%f\t", fltPt);
    int integer = -92789588;      // 4 bytes - %d
    printf("%d\t", integer);
    double dblPt = 3.141592653589793;  // 8 bytes - 15 or 16 digits - %lf
    printf("%lf\t", dblPt);
    printf("\n");
}