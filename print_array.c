#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
<<<<<<< HEAD
        size_t i;

        i = 0;
        while (array && i < size)
        {
                if (i > 0)
=======
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
>>>>>>> 367eed118c8775ff7c6fc29f80e812b28262f6d8
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
<<<<<<< HEAD
}       
=======
}
>>>>>>> 367eed118c8775ff7c6fc29f80e812b28262f6d8
