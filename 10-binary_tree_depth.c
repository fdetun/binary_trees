#include "binary_trees.h"

/**
 * binary_tree_depth - binary_tree_depth
 * @tree: node to check
 * Return: ctn or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t ctn = 0;

if (!tree)
return (0);
ctn = binary_tree_depth(tree->parent);
if (tree->parent)
ctn +=1;
return (ctn);
}
