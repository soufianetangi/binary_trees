#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 *
 * @tree: A double pointer to the root node of the BST to insert the value.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *currents, *new;

	if (tree != NULL)
	{
		currents = *tree;
		if (currents == NULL)
		{
			new = binary_tree_node(currents, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}
		if (value < currents->n)
		{
			if (currents->left != NULL)
				return (bst_insert(&currents->left, value));
			new = binary_tree_node(currents, value);
			if (new == NULL)
				return (NULL);
			return (currents->left = new);
		}
		if (value > currents->n)
		{
			if (currents->right != NULL)
				return (bst_insert(&currents->right, value));
			new = binary_tree_node(currents, value);
			if (new == NULL)
				return (NULL);
			return (currents->right = new);
		}
	}

	return (NULL);
}
