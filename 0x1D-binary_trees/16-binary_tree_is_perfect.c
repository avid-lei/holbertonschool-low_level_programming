#include "binary_trees.h"


int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int check_l, check_r;

    if (!tree)
        return (0);
    
    else
    {
        check_l = 1 + binary_tree_is_perfect(tree->left);
        check_r = 1 + binary_tree_is_perfect(tree->right);

        if (check_l != check_r)
            return (0);
        else
            return (1);
    
    }
}