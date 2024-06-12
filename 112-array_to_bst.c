#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array.
 *
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of element in the array
 *
 * Return: A pointer to the root node of the created BST, or NULL on failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t index, jndexx;

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		for (jndexx = 0; jndexx < index; jndexx++)
		{
			if (array[jndexx] == array[index])
				break;
		}
		if (jndexx == index)
		{
			if (bst_insert(&tree, array[index]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
