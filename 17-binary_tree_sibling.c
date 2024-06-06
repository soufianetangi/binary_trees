#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 *
 * @nodee: A pointer to the node to find the sibling.
 *
 * Return: NULL if node is NULL or parent is NULL or node has no sibiling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *nodee)
{
	if (nodee == NULL || nodee->parent == NULL)
		return (NULL);
	if (nodee->parent->left == nodee)
		return (nodee->parent->right);

	return (nodee->parent->left);
}
