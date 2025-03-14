#include <stdio.h>

// sort numbers or letters
void sortNum(int array[], int size);
void sortLet(char array[], int size);

// print resulting arrays
void printArrayNum(int array[], int size);
void printArrayLet(char array[], int size);

int main()
{
    int arrayNum[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    // nº bytes for whole array / nº bytes for single element
    int sizeNum = sizeof(arrayNum) / sizeof(arrayNum[0]);

    sortNum(arrayNum, sizeNum);
    printArrayNum(arrayNum, sizeNum);

    // same process repeated with characters
    char arrayLet[] = {'F', 'A', 'D', 'B', 'C'};
    int sizeLet = sizeof(arrayLet) / sizeof(arrayLet[0]);

    sortLet(arrayLet, sizeLet);
    printArrayLet(arrayLet, sizeLet);

    return 0;
}

// this is bubble sort. said to be efficient
void sortNum(int array[], int size)
{
    // chooses a position
    for (int chosPos = 0; chosPos < size - 1; chosPos++)
    {
        // searches other positions for comparison
        for (int cmp = 0; cmp < size - chosPos - 1; cmp++)
        {
            // if next element is lesser than current one: swap places
            if (array[cmp] > array[cmp + 1]) // by changing the relational comparator you can switch between:
                                             // sorting in ascending/descending order easily
            {
                // this swaps two positions at a time
                int temp = array[cmp];
                array[cmp] = array[cmp + 1];
                array[cmp + 1] = temp;
                // this block will repeat until
                // the element has been compared against all elements in other positions
                // meaning that it sequentially shifts left along the array
            }
            // now the next position along the array is chosen, its value will be analysed
            // and this value will also shift along the array
            // until it reaches a "neighbour value" thats larger
        }
    }
}

void printArrayNum(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n"); // improve readability
}
// process repeated for an array of characters
void sortLet(char array[], int size)
{
    for (int chosPos = 0; chosPos < size - 1; chosPos++)
    {
        for (int cmp = 0; cmp < size - chosPos - 1; cmp++)
        {
            if (array[cmp] > array[cmp + 1])
            {
                int temp = array[cmp];
                array[cmp] = array[cmp + 1];
                array[cmp + 1] = temp;
            }
        }
    }
}

void printArrayLet(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n"); // improve readability
}