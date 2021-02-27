#include "stdio.h"
#define ver 0.2

int main()
{

    int option = 0;

    printf("\n\nBinary tree version %.1f\n\n", ver);

    while (1)
    {
        printf("\n1 - Insert new value\n");
        printf("2 - Track a number\n");
        printf("8 - Credits\n");
        printf("0 - Exit program\n");
        printf("Please, insert one of the options above:");
        scanf("%i", &option);

        if (option == 0)
        {
            printf("\nBye!\n");
            return 0;
        }
    }
}