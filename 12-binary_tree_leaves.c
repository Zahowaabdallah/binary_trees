#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (1 + binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}