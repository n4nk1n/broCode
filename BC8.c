#include <stdio.h>
#include <stdlib.h>

enum Day
{
    NoDay,
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

int main()
{
    enum Day today = Sun;

    if (today == Sun || today == Sat)
    {
        printf("It's the weekend! Party time!\n");
    }
    else
    {
        printf("I have to work today :(\n");
    }

    int var = 5;      // variable
    int *pVar = NULL; // pointer to variable
    pVar = &var;      // it stores the address of the variable

    printf("value of variable: %d\n", var);
    printf("address that stores the variable: %p\n", &var);

    printf("value of variable: %d\n", *pVar); // dereferencing
    printf("address that stores the variable: %p\n", pVar);

    // matriz unidimensional
    int vetor[6] = {1,5,8,3,8,9,3,9};

    // matriz BIdimensional
    int vetor[3][3] = {
                        {5,7,8},
                        {6,2,1},
                        {0,4,6}
                      };

    return 0;
}