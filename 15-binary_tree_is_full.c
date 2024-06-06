#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *trees);
int is_full_recursive(const binary_tree_t *trees);

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @trees: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *trees)
{
	if (trees == NULL)
		return (0);
	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 *
 * @trees: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is not NULL, otherwise 1.
 */
int is_full_recursive(const binary_tree_t *trees)
{
	if (trees != NULL)
	{
		if ((trees->left != NULL && trees->right == NULL) ||
		    (trees->left == NULL && trees->right != NULL) ||
		    is_full_recursive(trees->left) == 0 ||
		    is_full_recursive(trees->right) == 0)

			return (0);
	}

	return (1);
}
