#include "binary_trees.h"

/**
 * binary_tree_depth - function
 * @tree: pointe
 * Return: int
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		i++;
	}
	return (i);
}
