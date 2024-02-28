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
		if (tree->left != NULL && tree->left->left != NULL)
			return (0);
		if (tree->left != NULL && tree->right->right != NULL)
			return (0);
		if (tree->right != NULL && tree->left->left != NULL)
			return (0);
	}
	return (1);
}
