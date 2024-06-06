#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 * @nodes: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *nodes)
{
	if (nodes == NULL || nodes->left != NULL || nodes->right != NULL)
		return (0);

	return (1);
}
