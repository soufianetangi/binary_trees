#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lefs = 0, rigs = 0;

		lefs = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rigs = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((lefs > rigs) ? lefs : rigs);
	}

	return (0);
}
