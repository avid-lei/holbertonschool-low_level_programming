#include "binary_trees.h"


int re_levelorder(const binary_tree_t *tree, void (*func)(int), int depth);

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;
    else
        func(tree->n);
        
        if (tree->parent && tree == tree->parent->left)
            binary_tree_levelorder(tree->parent->right, func);
        
        else if (tree->parent && tree == tree->parent->right)
        {    
            binary_tree_levelorder(tree->parent->left->left, func);
             binary_tree_levelorder(tree->left, func);
        }
        
        else
            binary_tree_levelorder(tree->left, func);
}
