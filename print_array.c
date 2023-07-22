<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - prints an of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
        size_t i;

        i = 0;
        while (array && i < size)
        {
                if (i > 0)
                        printf(", ");
                printf("%d", array[i]);
                ++i;
        }
        printf("\n");
=======
nclude <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints the elements of an array of integers.
 * @array: Pointer to the array of integers to be printed.
 * @size: The number of elements in the array.
 *
 * Description:
 * This function takes an array of integers and prints its elements.
 * 
 * Return: Void
 */

void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
>>>>>>> Master
}
