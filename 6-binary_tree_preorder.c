#include "binary_trees.h"

/**
 * binary_tree_preorder - func
 * @tree: pointer
 * @func: pointer
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		/* do nothing */
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
