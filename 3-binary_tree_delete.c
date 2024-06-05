#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 *
 * @treee: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *treee)
{
	if (tree != NULL)
	{
		binary_tree_delete(treee->left);
		binary_tree_delete(treee->right);
		free(treee);
	}
}
