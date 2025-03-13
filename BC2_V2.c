#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

// unsigned doubles the range and stores only positive values

int main()
{
    printf("BC NOTES\n");
    char character = '%';
    printf("char %c\t", character);
    char string[] = "qob.dob.dob.dop";
    printf("string %s\t", string);
    float fltPt = 3.141592; // 4 bytes - 6 or 7 digits - %f
    printf("float %f\t", fltPt);
    int integer = -92789588; // 4 bytes - %d
    printf("integer %d\t", integer);
    double dblPt = 3.141592653589793; // 8 bytes - 15 or 16 digits - %lf
    printf("double %lf\t", dblPt);
    bool truth = true; // 1 byte
    printf("boolean %d\t", truth);
    // printing character as int
    printf("char as int %d\t", character);
    // printing int as character
    printf("int as char %c\t", integer);
    printf("min of char %d and max of char %d\t", CHAR_MIN, CHAR_MAX);
    short halver = 2958; // 2 bytes %d

    unsigned short halfey = 32759284;    // double the range %d
    unsigned int percentU = 17873298759; // 4 bytes, double the range, %u

    long long int big;           // 8 bytes
    unsigned long long int big2; // max val: 18 quintillion
    // add 'U' to the end of the number so that no warning is issued
    printf("\n");
}