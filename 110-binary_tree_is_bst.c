#include "binary_trees.h"

/**
 * binary_tree_is_bst - function
 * @tree: pointer
 * Return: int
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst(tree, NULL, NULL));
}

/**
 * is_bst_helper - function
 * @node: pointer
 * @min: pointer
 * @max: pointer
 * Return: int
 */
int is_bst(const binary_tree_t *node,
const binary_tree_t *min, const binary_tree_t *max)
{
	if (node == NULL)
		return (1);

	if ((min != NULL && node->n <= min->n) || (max != NULL && node->n >= max->n))
		return (0);

	return (is_bst_helper(node->left, min, node)
	&& is_bst_helper(node->right, node, max));
}
