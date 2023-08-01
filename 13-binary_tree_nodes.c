#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l = binary_tree_nodes(tree->right);
	r = binary_tree_nodes(tree->left);

	return (1 + (l + r));
}
