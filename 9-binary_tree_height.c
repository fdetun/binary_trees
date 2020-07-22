#include "binary_trees.h"

/**
 * binary_tree_height - binary_tree_height
 * @tree: node to check
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
binary_tree_t *k = NULL;
size_t i = 0;

if (!tree)
return (0);
k = tree->parent;
while (k)
{
k = k->parent;
i += 1;
}
return (i);
}
