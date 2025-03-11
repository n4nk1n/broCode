#include <stdio.h>
#include <string.h>

// printf("\n");
// puts("");
// scanf("%d", &);

/*
Here is where I will be taking notes from Bro Codes course
*/

int sum(int w, int t)
{
    return w + t;
}

int prod(int q, int r)
{
    return q * r;
}

void cap(char* sekwens)
{
    int length = strlen(sekwens);
    for (int q = 0; q < length; q++)
    {
        if (sekwens[q] >= 'a' || sekwens[q] <= 'z')
        {
            sekwens[q] -= 32;
        }
    }
}

int main()
{
    // tab and newline escape sequences
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    // array
    double prices[] = {14.1, 123.25, 3.63, 935.5, 22.358, 3.82, 363.6, 64.646, 253632.2524};
    int max = sizeof(prices) / sizeof(double);
    for (int i = 0; i < max; i++)
    {
        printf("%-8.3lf\n", prices[i]);
    }
    // addition
    int a = 3;
    int b = 6;
    int plus = sum(a, b);
    printf("%d\n", plus);
    // multiplication
    int times = prod(a, b);
    printf("%d\n", times);
    // capitalization
    char name[] = "zarathustra";
    printf("first: %s\n", name);
    cap(name);
    printf("second: %s\n", name);
    return 0;
}

/*
short < int < long
float < double
*/