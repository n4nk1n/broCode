#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // typedef gives nicknames to datatypes
    // without typedef we would have to repeat struct everytime
    typedef struct
    {
        int numCredits;
        int duration;
        char name[50];
        // teoricas, problemas, laboratorio, bibliografia, exames, projeto
        // char folders[6][2];
    } course;

    // declaration
    course prog;
    course PE;

    // dot is member access operator
    strcpy(prog.name, "Programming");
    prog.numCredits = 6;
    prog.duration = 7;

    // this is how to assign something to each parameter
    strcpy(PE.name, "Prob & Stat");
    PE.numCredits = 6;
    PE.duration = 14;

    printf("%s\n", PE.name);
    printf("%d\n", prog.duration);

    // declaration and definition of some more courses
    course calc2 = {6, 14, "Calculus 2"};
    course eteo = {6, 7, "Electrotechnical Theory"};
    course calc3 = {6, 14, "Calculus 3"};
    course ss = {6, 7, "Signals and Systems"};

    // array of courses
    course aoc[6] = {prog, PE, calc2, eteo, calc3, ss};
    // number of course
    int noc = sizeof(aoc) / sizeof(prog);

    for (int i = 0; i < noc; i++)
    {
        printf("\n\"%s\" data:\n", aoc[i].name);
        printf("Number of Credits: %d\n", aoc[i].numCredits);
        printf("Duration of the course: %d\n", aoc[i].duration);
    }
    return 0;
}