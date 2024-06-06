#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @trees: A pointer to the node to measure the depth.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *trees)
{
	return ((trees && trees->parent) ? 1 + binary_tree_depth(trees->parent) : 0);
}
