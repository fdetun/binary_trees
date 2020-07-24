#include "binary_trees.h"

/**
 * binary_tree_nodes - binary_tree_nodes
 * @tree: node to check
 * Return: size
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (tree->left || tree->right)
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->left) + 1);
}
