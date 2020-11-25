#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to root of tree.
 * Return: height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r, height;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	l = 1 + binary_tree_height(tree->left);
	r = 1 + binary_tree_height(tree->right);
	height = l > r ? l : r;
	return (height);
}
