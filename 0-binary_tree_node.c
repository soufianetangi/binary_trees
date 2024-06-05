i#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 *
 * @parent: A pointer to the parent of the node.
 * @value: The value to be puted on the news node.
 *
 * Return: If it fails - NULL else - a pointer to the news node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *news;

	news = malloc(sizeof(binary_tree_t));
	if (news == NULL)
		return (NULL);

	news->n = value;
	news->parent = parent;
	news->left = NULL;
	news->right = NULL;

	return (news);
}

