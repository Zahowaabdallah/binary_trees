#include "binary_trees.h"

/**
 * binary_tree_nodes - function count node with at least 1 child in binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0 If tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		return (1);

	return (binary_tree_nodes(tree->left));

	if (tree->right != NULL)
		return (1);

	return (binary_tree_nodes(tree->right));
}
