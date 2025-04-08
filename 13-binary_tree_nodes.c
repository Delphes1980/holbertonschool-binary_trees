#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
*@tree: a pointer to the root node of the tree to count the number of nodes
*
* Return: the number of nodes. If tree is NULL: return 0.
* A NULL pointer is not a node
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left, right;
	int sum = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);
		sum = left + right + 1;
	}

	return (sum);
}
