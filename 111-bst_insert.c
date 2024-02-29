#include "binary_trees.h"

/**
 * bst_insert - function
 * @tree: double pointer to the root node.
 * @value: the value to store in the node to be inserted.
 * Return: a pointer to the created node, or null in case of failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL);

	return (bst_insert_recursive(tree, *tree, value));
}

/**
 * bst_insert_recursive - function
 * @tree: double pointer
 * @node: pointer
 * @value: int
 * Return: pointer.
 */
bst_t *bst_insert_recursive(bst_t **tree, bst_t *node, int value)
{
	if (*tree == NULL)
	{
		*tree = binary_tree_node(node, value);
		return (*tree);
	}

	if (value < node->n)
	{
		if (node->left == NULL)
		{
			node->left = binary_tree_node(node, value);
			return (node->left);
		}
		return (bst_insert_recursive(tree, node->left, value));
	}
	else if (value > node->n)
	{
		if (node->right == NULL)
		{
			node->right = binary_tree_node(node, value);
			return (node->right);
		}
		return (bst_insert_recursive(tree, node->right, value));
	}

	return (NULL);
}
