#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_avl - function checks if a binary tree is a valid AVL Tree
 * @tree: a pointer to the root node of the tree to check
 * Return: if tree is a valid AVL Tree,and 0 otherwise,and 0 If tree is NULL
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	size_t left_height, right_height;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height - right_height > 1 || right_height - left_height > 1)
		return (0);
	return (binary_tree_is_avl(tree->left) && binary_tree_is_avl(tree->right));
}
