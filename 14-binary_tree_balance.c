#include "binary_trees.h"

#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
*
* Return: the height of the tree. If tree is NULL: return 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
	{
		return (height_left + 1);
	}

	else
	{
		return (height_right + 1);
	}
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: a pointer to the root node of the tree to measure the balance factor
*
* Return: the balance of the tree. If tree is NULL: return 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	int max = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left = binary_tree_balance(tree->left) + 1;
	}

	if (tree->right != NULL)
	{
		right = binary_tree_balance(tree->right) + 1;
	}

	max = left - right;

	return (max);
}
