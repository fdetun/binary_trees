#include "binary_trees.h"

/**
 * binary_tree_leaves - binary_tree_leaves
 * @tree: node to check
 * Return: size
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (tree->left && tree->right)
return (2);
else
return (1);
}
