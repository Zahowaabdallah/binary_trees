#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - function checks if a binary tree is perfect
 * @tree:  pointer to the root node of the tree to check
 * Return: 0 If tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
		return(binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}

