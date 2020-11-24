#include "binary_trees.h"
/**
*binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: Pointer to parent node.
 * @value: integer value.
 * Return: Pointer to new node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
		return (NULL);
	bt = binary_tree_node(parent, value);
	if (!bt)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = bt;
		bt->left = parent->left;
	}
	parent->left = bt;
	return (bt);
}
