
#include "binary_trees.h"

<<<<<<< HEAD
/**
 * binary_tree_insert_left - function for inserting left child of a parent node
 * @parent: pointer to the parent node
 * @value: value
 * Return: a pointer to the newNode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (parent == NULL)
		return (NULL);

	binary_tree_t *newNode = malloc(sizeof(parent));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = newNode;
<<<<<<< HEAD
	}
	else
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	}
=======
	}
	else
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	}

	return (newNode);
}
>>>>>>> 535098d3ec6d58c3079e826ded4bc28b994bc934

	return (newNode);
}