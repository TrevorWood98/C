#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAXLENGTH 1000
#define MAXWORDS 100

#define ROWS 5
#define COLS 5
int main()
{

    int multi[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}};

    // sum our rows
    printf("Row Sums: \n");
    int sum = 0;
    for (int i = 0; i < ROWS; i++)
    {
        sum = 0;
        for (int j = 0; j < COLS; j++)
        {
            sum += multi[i][j];
        }
        printf(" %d ", sum);
    }

    printf("\n");

    // sum our columsn
    printf("Column Sums: \n");
    sum = 0;
    for (int rows = 0; rows < ROWS; rows++)
    {
        sum = 0;
        for (int cols = 0; cols < COLS; cols++)
        {
            sum += multi[cols][rows];
        }
        printf(" %d ", sum);
    }

    return 0;
}