#include "binary_trees.h"

/**
 * binary_tree_rotate_left- function
 * @tree: input
 * Return: pointer
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL)
		return (tree);

	binary_tree_t *temp = tree->right;

	tree->right = temp->left;
	if (temp->left != NULL)
		temp->left->parent = tree;

	temp->left = tree;
	temp->parent = tree->parent;
	tree->parent = temp;

	return (temp);
}
