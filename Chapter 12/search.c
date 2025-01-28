#include <stdio.h>
#include <stdbool.h>
#define N 10
bool search(const int a[], int n, int key);
int main()
{

    int temperature[7] = {1, 2, 3, 4, 5, 6, 7};

    bool searching = search(temperature, 7, 3);
    switch (searching)
    {
    case 1:
        printf("Found\n");
        break;

    default:
        printf("Not Found\n");
        break;
    }
    return 0;
}

bool search(const int *a, int n, int key)
{
    const int *p;
    for (p = a; p < a + n; p++)
    {
        if (key == *p)
            return true;
    }
    return false;
}
