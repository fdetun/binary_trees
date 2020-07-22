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
nd->parent = parent;
nd->left = NULL;
nd->right = NULL;
nd->n = value;
return (nd);
}
