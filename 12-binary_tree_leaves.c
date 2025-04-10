#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: a pointer to the root node of the tree to count the number of leaves
*
* Return: If tree is NULL: return 0. A NULL pointer is not a leaf
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, sum;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	else
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		sum = left + right;
	}

	return (sum);
}
