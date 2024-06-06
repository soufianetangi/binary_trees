#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 *
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	binary_tree_t *pivots, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	pivots = tree->right;
	tmp = pivots->left;
	pivots->left = tree;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = pivots;
	pivots->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = pivots;
		else
			tmp->right = pivots;
	}

	return (pivots);
}
