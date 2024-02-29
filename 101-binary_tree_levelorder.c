#include "binary_trees.h"

/**
 * binary_tree_levelorder - function goes through a binary tree using
 * level-order traversal
 * @tree: a pointer to the root node of the tree to traver
 * @func: a pointer
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	/* condition to stop the recursion */
	if (tree == NULL || func == NULL)
		/* do nothing */
		return;
	func(tree->n);
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
