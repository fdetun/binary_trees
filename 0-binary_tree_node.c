#include "binary_trees.h"

/**
 * binary_tree_node - binary_tree_node
 * @parent: Pointer to the parent node
 * @value: value of node
 * Return: nd
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

binary_tree_t *nd = NULL;
nd = malloc(sizeof(binary_tree_t));
if (!nd)
return (NULL);
nd->n = value;
nd->left = NULL;
nd->right = NULL;
if (!parent)
{
return (nd);
}
parent->left = nd;
nd->parent = parent;
return (nd);
}
