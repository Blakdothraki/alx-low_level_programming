#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function called
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: a function that adds positive numbers
 * Return: set to 0 or 1 otherwise
 */
int main (int argc, char *argv[])
{
    int unit[5] = {25, 10, 5, 2, 1};
    int temp, i;
    temp = 0;
    int value = atoi(argv[1]);

    if (argc == 2)
    {
        if (value <= 0)
            printf("0\n");
        else
        {
            for (i = 0; i < 5; i++)
            {
                temp = value / unit[i];
                value -= temp * unit[i];
                if (value == 0)
                {
                    printf("%d\n", temp);
                    break;
                }
            }
        }
    }
    else
    {
        printf("Error\n");
        return (1);
    }

    return (0);
}

