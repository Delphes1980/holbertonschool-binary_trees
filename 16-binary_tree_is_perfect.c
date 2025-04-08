#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: a pointer to the node to measure the depth
*
* Return: nothing. If tree is NULL: return 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent == NULL)
	{
		return (0);
	}

	else
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
}


/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: a pointer to the root node of the tree to check
*
* Return: 1 if perfect, otherwise 0. If tree is NULL: return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	left = binary_tree_depth(tree->left);
	right = binary_tree_depth(tree->right);

	if (left == right)
	{
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	}

	return (0);
}
