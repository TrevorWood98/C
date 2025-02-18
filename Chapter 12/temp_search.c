#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define NUM_ROWS 7
#define NUM_COL 24
void search(const int *a, int n, int key);
int main()
{

    int temperatures[NUM_ROWS][NUM_COL] = {
        {34, 56, 54, 65, 23, 25, 47, 65, 45, 12, 42, 76, 44, 12, 45, 87, 65, 43, 23, 45, 34, 5, 6, 21},
        {34, 56, 54, 65, 23, 25, 47, 65, 45, 12, 42, 76, 544, 56, 45, 87, 65, 43, 23, 45, 34, 5, 6, 21},
        {34, 56, 54, 65, 23, 25, 47, 65, 45, 12, 42, 76, 544, 54, 45, 87, 65, 43, 23, 45, 34, 5, 6, 21},
        {34, 56, 54, 65, 23, 25, 47, 65, 45, 12, 45, 76, 544, 36, 45, 87, 65, 43, 23, 45, 34, 5, 6, 21},
        {34, 30, 54, 65, 23, 25, 47, 65, 45, 12, 72, 76, 544, 35, 45, 87, 65, 43, 23, 45, 34, 5, 6, 21},
        {34, 56, 54, 65, 23, 25, 47, 65, 35, 12, 42, 76, 544, 38, 45, 87, 65, 43, 23, 45, 34, 5, 6, 21},
        {34, 56, 54, 65, 32, 25, 47, 65, 45, 12, 42, 76, 544, 39, 45, 87, 65, 43, 23, 45, 34, 5, 6, 32}};

    search(&temperatures[0][0], NUM_ROWS * NUM_COL, 32);
}

void search(const int *a, int n, int key)
{
    const int *p;
    for (p = a; p < a + n; p++)
    {
        if (*p == key)
        {
            printf("Found %d on row: %ld column: %.0f\n", *p, (p - a) / NUM_COL, ceil(((p - a) % NUM_COL) + 0.5));
            break;
        }
        else if (*p != key && p == a + n - 1)
        {
            printf("Not Found\n");
        }
    }
}
