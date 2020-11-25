#include "binary_trees.h"
/**
*binary_tree_insert_right - inserts a node as the right-child of another node.
 * @parent: Pointer to parent node.
 * @value: integer value.
 * Return: Pointer to new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
		return (NULL);
	bt = binary_tree_node(parent, value);
	if (!bt)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = bt;
		bt->right = parent->right;
	}
	parent->right = bt;
	return (bt);
}
