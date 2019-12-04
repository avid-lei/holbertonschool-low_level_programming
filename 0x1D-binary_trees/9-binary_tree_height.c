#include "binary_trees.h"


size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_l, height_r;

    if (!tree || (!tree->left && !tree->right))
        return (0);
   else
   {
       height_l = binary_tree_height(tree->left);
       height_r = binary_tree_height(tree->right);

        if (height_l >= height_r)
            return (height_l + 1);
        else
            return (height_r + 1);
   }

}
