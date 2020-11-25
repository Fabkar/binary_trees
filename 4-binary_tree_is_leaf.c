#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: pointer to node.
 * Return: 1 if there is leaf otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
