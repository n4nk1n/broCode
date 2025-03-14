#include <stdio.h>
#include <string.h>
#include <ctype.h>

double findMax(double x, double y)
{
    return (x > y) ? x : y;
}

int main()
{
    /*
    double myHeight = 180.2938729;
    double carHeight = 200.103802950;
    double greatest = findMax(myHeight, carHeight);
    printf("car is taller than me: %.3lf\n", greatest);
    */

    char string1[37] = "klairvoyance, clarity";
    printf("\n1.\nFirst sentence:%s\n", string1);
    char string2[17] = " AND MACHIAVELISM";
    printf("Second sentence: %s\n", string2);
    char stringTemp[80];

    strcat(string1, string2); // appends string2 to end of string1
                              // string1 MUST have enough space for the the new characters!
                              // maybe concatenate both to a third string
    printf("\n2.\nFull concatenation: %s\n", string1);

    // int length1 = strlen(string1); printf("%d\n", length1); int length2 = strlen(string2); printf("%d\n", length2);

    string1[21] = '\0'; // according to DS, here occurs the Stack Smashing
                        // this was happening because there wasn't enough space, now there is
    printf("Null character truncation: %s\n", string1);

    strncat(string1, string2, 6); // appends n characters from string2 to string1
    printf("Only 6 characters appended from second sentence: %s\n", string1);
    string1[21] = '\0'; // to undo the concatenation again

    // char stringTemp[38] = string1[38]; // this is OUTRAGEOUSLY wrong

    strcpy(stringTemp, string1); // a copy of string1 for safe keeping
    strcpy(string1, string2);    // copy string2 to string1
    printf("\n3.\nSecond string copied entirely onto first string: %s\n", string1);
    strcpy(string1, stringTemp); // this reverts string1 to original values

    strncpy(string1, string2, 5); // copy n characters of string2 to string1
    printf("Only 5 characters copied onto first string: %s\n", string1);
    strcpy(string1, stringTemp);

    return 0;
}