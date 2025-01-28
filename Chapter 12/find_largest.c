#include <stdio.h>
#define N 10

int find_largest(int a[], int n);
int main()
{

    int j[10] = {1, 2, 3, 4, 5, 64, 7, 8, 9, 11};
    int a = 0, *p;
    p = j;
    a = find_largest(p, N); // passes a pointer to the first element of j, so no copy is done
    // a = find_largest(j, N); //fine as well
    printf("%d\n", a);

    return 0;
}

// pass in an array
int find_largest(int a[], int n)
{
    int i, max;

    max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    return max;
}