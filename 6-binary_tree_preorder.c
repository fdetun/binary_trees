#include "binary_trees.h"

/**
 * binary_tree_preorder - binary_tree_preorder
 * @tree: node to check
 * @func: func to print n
 * Return: Void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;
func(tree->n);
if (tree->left)
binary_tree_preorder(tree->left, func);
if (tree->right)
binary_tree_preorder(tree->right, func);
}
