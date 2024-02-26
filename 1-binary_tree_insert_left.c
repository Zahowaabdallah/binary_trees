#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if(parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(parent));
	newNode->n = value;
	newNode ->left = NULL;
	newNode->right = NULL;
	if (parent -> left == NULL)
		parent->left = newNode;
}
