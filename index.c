#include <stdio.h>
#include "index_header.h"

#define ver 0.2

int option;
int value;

typedef struct main_node_struct
{
    int node_value;
    int *right_branch;
    int *left_branch;
} mns;

struct mns *chain, *root;

int main()
{

    printf("\n\nBinary tree version %.1f\n\n", ver);

    while (1)
    {
        printf("\n1 - Insert new value\n");
        printf("2 - Track a number\n");
        printf("8 - Credits\n");
        printf("0 - Exit program\n");
        printf("Please, insert one of the options above:");
        scanf("%i", &option);

        switch (option)
        {
        case 1:
            printf("\nValue to be inserted: ");
            scanf("%i", &value);
            insert_value(value);
            break;

        case 2:
            printf("\nValue to be tracked: ");
            scanf("%i", &value);
            track_value(value);
            break;

        case 8:
            printf("\n\nCreated by Enzo Franzini\n\n");
            break;

        default:
            printf("\nBye!\n\n");
            return 0;
            break;
        }
    }
}

void insert_value(int value)
{
    if (root == NULL)
    {
       
    }
    else
    {
    }
}

void track_value(int value)
{

}