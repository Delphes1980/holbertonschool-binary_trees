#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: a pointer to the root node of the tree to measure the balance factor
*
* Return: the balance of the tree. If tree is NULL: return 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;
	int max = 0;

	if (tree == NULL)
	{
		return (-1);
	}

	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);
	max = left - right;

	if (left == -1 || right == -1 || (max > 1))
	{
		return (max);
	}

	return (max);
}
