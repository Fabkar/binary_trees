#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node (leaf).
 * @parent: Pointer to parent node.
 * @value: integer value.
 * Return: Pointer to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	bt = malloc(sizeof(binary_tree_t));
	if (!bt)
		return (NULL);
	bt->parent = parent;
	bt->n = value;
	bt->left = bt->right = NULL;
	return (bt);
}
