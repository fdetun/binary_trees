#include "binary_trees.h"

/**
 * maxfde - maxfde
 * @l: left height
 * @r: right height
 * Return: l or r
 */

size_t maxfde(size_t l, size_t r)
{
if (l > r)
return (l);
return (r);
}


/**
 * binary_tree_height - binary_tree_height
 * @tree: node to check
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (!tree->left && !tree->right)
return (0);
return (maxfde(binary_tree_height(tree->left),
	binary_tree_height(tree->right)) + 1);
}
