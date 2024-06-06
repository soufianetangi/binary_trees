#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary by tree post-order traversal.
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @funcs: A pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*funcs)(int))
{
	if (tree && funcs)
	{
		binary_tree_postorder(tree->left, funcs);
		binary_tree_postorder(tree->right, funcs);
		funcs(tree->n);
	}
}
