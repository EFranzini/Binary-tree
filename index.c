#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "index_header.h"

#define ver 0.3

int option;
int value;

typedef struct main_node_struct
{
    int node_value;
    struct mns *right_branch, *left_branch;
} mns;

struct main_node_struct *auxiliar, *chain, *root;

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
            insert_node(value);
            break;

        case 2:
            printf("\nValue to be tracked: ");
            scanf("%i", &value);
            track_value(value);
            break;

        case 8:
            printf("\n\nCreated by Enzo Franzini\n\n");
            break;

        case 0:
            printf("\nBye!\n\n");
            return 0;
            break;
        }
    }
}

void insert_node(int value)
{
    if (root == NULL)
    {
        chain = (mns *)malloc(sizeof(mns));
        root = auxiliar = chain;
        auxiliar->right_branch = NULL;
        auxiliar->left_branch = NULL;
        insert_node_value();
    }
    else
    {
        if (check_if_value_is_inserted())
        {
            printf("\n\nValue already inserted!\n\n");
        }
        else
        {
            auxiliar = root;

            chain = (mns *)malloc(sizeof(mns));
            chain->left_branch = NULL;
            chain->right_branch = NULL;
        }
    }
}

bool check_if_value_is_inserted()
{

    if (value == root->node_value)
    {
        return true;
    }else{
        return false;
    }
}

void insert_node_value()
{
    chain->node_value = value;
}

void track_value(int value)
{
    printf("%i", auxiliar->node_value);
}