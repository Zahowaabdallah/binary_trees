#include "binary_trees.h"
/**
 *binary_tree_node - function
 * @parent: pointer to the parent node
 * @value: int
 * Return: pointer to struct
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent == NULL)
		return (newNode);

	if (value < parent->n)
		parent->left = newNode;
	else
		parent->right = newNode;

	return (newNode);
}
