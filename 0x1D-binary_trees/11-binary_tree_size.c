#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size_l, size_r;

    if (!tree)
        return (0);
    else
    {
        size_l = 1 + binary_tree_size(tree->left);
        size_r = 1 + binary_tree_size(tree->right);

        return (size_l + size_r - 1);
    }

}