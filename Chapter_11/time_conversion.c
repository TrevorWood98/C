#include <stdio.h>
#define N 10
void split_time(long total_sec, int *hr, int *min, int *sec);
int main()
{

    long total_sec = 5487;

    int hr = 0, min = 0, sec = 0;

    split_time(total_sec, &hr, &min, &sec);

    printf("%ld, %d hour, %d minute(s), %d seconds", total_sec, hr, min, sec);
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    int temp_sec = (int)total_sec;
    *hr = temp_sec / 3600;
    temp_sec -= *hr * 3600;
    *min = temp_sec / 60;
    temp_sec -= *min * 60;
    *sec = temp_sec;
}