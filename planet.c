#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9
int main(int argc, char *argv[])
{

    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; j < NUM_PLANETS; j++)
        {
            if (strcmp(argv[i], planets[j]) == 0)
            {
                printf("Planets %s found at %d\n", planets[j], j + 1);
                break;
            }
            if (j == NUM_PLANETS - 1)
                printf("Planet %s does not exist", argv[i]);
        }
    }

    return 0;
}