#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    binary_tree_t *temp = parent;
    if (!node)
        return (NULL);

    if (!parent)
        return (NULL);

    node->n = value;
    node->right = NULL;

    re_left(temp, node);
    return (node);

}

void re_left(binary_tree_t *t, binary_tree_t *node)
{
    if (!(t->left))
    {
        node->parent = t;
        node->left = NULL;
        t->left = node;
        return;
    }
    else if (t->left->n < node->n)
    {
        node->parent = t;
        node->left = t->left;
        t->left->parent = node;
        t->left = node;
        return;
    }
    else
        re_left(t->left, node);
}