#include "binary_trees.h"

/**
 * binary_tree_postorder - func
 * @tree: pointer
 * @func: pointer
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* condition to stop the recursion */
	if (tree == NULL || func == NULL)
		/* do nothing */
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
