#include "binary_trees.h"
#include "9-binary_tree_height.c"
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int height_of_left_subtree = binary_tree_height(tree->left);
	int height_of_right_subtree = binary_tree_height(tree->right);
	return height_of_left_subtree - height_of_right_subtree;
}
