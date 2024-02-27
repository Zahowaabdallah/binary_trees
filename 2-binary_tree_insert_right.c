#include "binary_trees.h"

/**
 * binary_tree_insert_right - function inserting right child of a parent node
 * @parent: pointer to the parent node
 * @value: value
 * Return: a pointer to the newNode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	if (parent == NULL)
		return (NULL);

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = newNode;
	}
	else
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
		parent->right = newNode;
	}

	return (newNode);
}
