#include "binary_trees.h"

/**
 * binary_tree_uncle - binary_tree_uncle
 * @node: node to check
 * Return: Uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent->parent)
return (NULL);
if (!node->parent)
return (NULL);
if (node->parent == node->parent->parent->right)
return (node->parent->parent->left);
else
return (node->parent->parent->right);
}
