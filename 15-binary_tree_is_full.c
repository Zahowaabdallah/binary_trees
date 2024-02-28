#include "binary_trees.h"

/**
 * binary_tree_is_full - function checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 If tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		if (tree->left != NULL)
			return (1);
		if (tree->left != NULL)
			return (0);
	}
	return (0);
}
