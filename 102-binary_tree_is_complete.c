#include "binary_trees.h"

/**
 * binary_tree_is_complete - function checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to chec
 * Return: 0 If tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		if (tree->left != NULL && tree->left->left != NULL)
			return (0);
		if (tree->left->right != NULL && tree->right != NULL)
			return (0);
		if (tree->right->left != NULL && tree->right->right != NULL)
			return (0);
	}
	return (1);
}
