/*
 * Task 1:
 * 
 * Write a function called sort3() to sort three integers into descending order
 * (from high to low).
 * 
 * This function is NOT to be implemented using an array.
 */

#include <stdio.h>

// Swap two integer values
void swap(int *a, int *b);
// Sort three integers no array version
// Biggest int becomes a, second b, third c
void sort3(int *a, int *b, int *c);

int main()
{
    int i1 = 44, i2 = 9, i3 = 130;
    printf("Original order i1[%d], i2[%d], i3[%d]\n", i1, i2, i3);
    sort3(&i1, &i2, &i3);
    printf("Ascending order i1[%d], i2[%d], i3[%d]\n", i1, i2, i3);
    i1 = 10, i2 = 33, i3 = 55;
    printf("Original order i1[%d], i2[%d], i3[%d]\n", i1, i2, i3);
    sort3(&i1, &i2, &i3);
    printf("Ascending order i1[%d], i2[%d], i3[%d]\n", i1, i2, i3);
    return 0;
}

void sort3(int *a, int *b, int *c)
{
    if (*b < *c)
    {
        swap(b, c);
    }
    if (*a < *b)
    {
        swap(a, b);
    }
    if (*b < *c)
    {
        swap(b, c);
    }
}

void swap(int *a, int *b)
{
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}