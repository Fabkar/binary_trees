#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree.
 * Return: if tree is NULL return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!(tree) || (binary_tree_balance(tree) != 0))
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if (binary_tree_balance(tree) == 0)
	{
		return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
	}
	return (0);
}
/**
 * binary_tree_height - computes the height of a binary tree.
 * @tree: points to the node to the tree to be measured.
 * Return: 0 if tree is NULL or the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (-1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;
	if (height_left > height_right)
		return (height_left);
	return (height_right);
}
/**
 * binary_tree_balance - computes the balance factor of a binary tree.
 * @tree: pointer to the root node.
 * Return: the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	return (height_left - height_right);
}
