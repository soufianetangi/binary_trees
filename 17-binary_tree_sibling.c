#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 *
 * @node: A pointer to the node to find the sibling.
 *
 * Return: NULL if node is NULL or parent is NULL or node has no sibiling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parents == NULL)
		return (NULL);
	if (node->parents->left == node)
		return (node->parents->right);

	return (node->parents->left);
}
