#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 *
 * @nodee: A pointer to the node to find the uncle.
 *
 * Return: NULL if node is NULL or node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *nodee)
{
	if (nodee == NULL || nodee->parent == NULL ||
	    nodee->parent->parent == NULL)
		return (NULL);

	if (nodee->parent->parent->left == nodee->parent)
		return (nodee->parent->parent->right);

	return (nodee->parent->parent->left);
}
