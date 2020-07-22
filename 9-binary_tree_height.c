#include "binary_trees.h"

/**
 * binary_tree_height - binary_tree_height
 * @tree: node to check
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (tree->left && tree->right)
return (2);
else if (tree->right && !tree->left)
return (1);
else if (tree->left && !tree->right)
return (1);
else
return (0);
}
