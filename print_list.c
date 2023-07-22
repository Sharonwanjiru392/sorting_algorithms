#include <stdio.h>
#include "sort.h"

/**
 * print_list - prints a list of integers
 *
 * @list: The to be printed
 */
{
        int i;
        while (list)
        {
                if (i > 0)
                        printf(", ");
                printf("%d", list->n);
                ++i;
                list = list->next;
        }
        printf("\n");
}
