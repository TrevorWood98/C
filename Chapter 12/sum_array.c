#include <stdio.h>
#define N 10
int sum_array(const int a[], int n);
int main()
{

    int myArray[10] = {73, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int sum = 0;
    sum = sum_array(myArray, N);
    printf("%d", sum);
    return 0;
}

int sum_array(const int *a, int n)
{
    const int *p;
    int sum = 0;
    for (p = a; p < a + N; p++)
    {
        sum += *p;
    }
    return sum;
}