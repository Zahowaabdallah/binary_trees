#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree) {
    if(tree == NULL)
        return 0;
    if (binary_tree_is_leaf(tree) == 1 || binary_tree_is_root(tree) == 1)
        return 0;
    return 1;
}
