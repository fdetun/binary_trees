#include "binary_trees.h"

/**
 * binary_tree_insert_left - binary_tree_insert_left
 * @parent: Pointer to the parent node
 * @value: value of node
 * Return: nd
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *tmp = NULL;
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
nd->parent = parent;
if (parent->right != NULL)
{
tmp=parent->right;
parent->right=nd;
nd->right=tmp;
nd->parent=parent;
tmp->parent=nd;
}
parent->right=nd;
return (nd);
}
