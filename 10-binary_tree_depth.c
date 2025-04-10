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
