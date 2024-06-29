#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter your degrees fahrenheit: ");
    scanf("%f", &fahrenheit); // store user value at the address of fahrenheit

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius is: %.1f\n", celsius);
}