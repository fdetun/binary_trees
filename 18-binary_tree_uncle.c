#include "binary_trees.h"

/**
 * binary_tree_uncle - binary_tree_uncle
 * @node: node to check
 * Return: Uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *fde = NULL;
if (!node || !node->parent->parent || !node->parent)
return (NULL);
fde = node->parent->parent;
if (node->parent == fde->left)
return (fde->right);
else
return (fde->left);
}
