#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a leaf
 * @node: pointer to the root node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left || !node->right)
		return (0);
	return (1);
}
