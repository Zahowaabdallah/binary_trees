#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
<<<<<<< HEAD
	if (tree->left == NULL || tree->right == NULL || tree == NULL)
=======
	if (tree == NULL)
>>>>>>> a6e9cb34fa744c51aa61a15aac9e4fb41678d27d
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
