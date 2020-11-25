#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: pointer to root of tree.
 * Return: number of nodes of tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	else
		return (0);
}
