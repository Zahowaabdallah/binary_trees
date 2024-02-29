#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - function
 * @tree: pointer
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t height_of_left_subtree = (tree->left == NULL) ? (size_t)-1 : binary_tree_height(tree->left);
    size_t height_of_right_subtree = (tree->right == NULL) ? (size_t)-1 : binary_tree_height(tree->right);

    return (int)(height_of_left_subtree) - (int)(height_of_right_subtree);
}
