#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @trees: A pointer to the root node of the tree to count the number of leaves.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *trees)
{
	size_t leave = 0;

	if (trees)
	{
		leaves += (!trees->left && !trees->right) ? 1 : 0;
		leaves += binary_tree_leaves(trees->left);
		leaves += binary_tree_leaves(trees->right);
	}

	return (leaves);
}
