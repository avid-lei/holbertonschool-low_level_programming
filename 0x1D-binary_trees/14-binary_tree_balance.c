#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
    size_t height_l, height_r;

    if (!tree)
        return (0);
    else
    {
        height_r = re_height_r(tree);
        height_l = re_height_l(tree);
        return (height_l - height_r);        
    }
}

int re_height_l(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    else
        return (1 + re_height_l(tree->left));
}

int re_height_r(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    else
        return (1 + re_height_r(tree->right));
}
