#include "binary_trees.h"

nclude "binary_trees.h"
/**
 * binary_tree_inorder - func
 * @tree: pointer
 * @func: pointer
 * Return: void
 */
void count_trees(const binary_tree_t *tree, void (*func)(int))
{
	/* condition to stop the recursion */
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
root@ce
