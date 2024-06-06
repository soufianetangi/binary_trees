#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 *
 * @first: A pointer to the first node.
 * @seconds: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes.
 *         If no common ancestor was found, your function must return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *seconds)
{
	binary_tree_t *mom, *pop;

	if (!first || !seconds)
		return (NULL);
	if (first == seconds)
		return ((binary_tree_t *)first);

	mom = first->parent, pop = seconds->parent;
	if (first == pop || !mom || (!mom->parent && pop))
		return (binary_trees_ancestor(first, pop));
	else if (mom == seconds || !pop || (!pop->parent && mom))
		return (binary_trees_ancestor(mom, seconds));

	return (binary_trees_ancestor(mom, pop));
}
