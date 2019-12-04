#include "binary_trees.h"


binary_tree_t *re_lca(binary_tree_t *first, binary_tree_t *second, binary_tree_t *root);

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    binary_tree_t *f_parent = (binary_tree_t *)first;
    binary_tree_t *s_parent = (binary_tree_t *)second;
 
    while (f_parent->parent)
        f_parent = f_parent->parent;

    while (s_parent->parent)
        s_parent = s_parent->parent;

    if (f_parent != s_parent)
        return (NULL);
    

    return (re_lca((binary_tree_t *)first, (binary_tree_t *)second, f_parent));


}

binary_tree_t *re_lca(binary_tree_t *first, binary_tree_t *second, binary_tree_t *root)
{
    binary_tree_t *f, *s;

    if (!root)
        return (NULL);
    
    if (root == first)
        return (first);
    
    if (root == second)
        return (second);
    
    f = re_lca(first, second, root->left);
  /*   
    if (!f)
        f = re_lca(first, second, root->right, 1);
*/
    s = re_lca(first, second, root->right);
/* 
    if (!s)
        s = re_lca(first, second, root->right, 2);

*/
    if (f && s)
    {    
        return (root);
    }
    else if (f)
        return (f);
    else if (s)
        return (s);
    else
        return (NULL);



}