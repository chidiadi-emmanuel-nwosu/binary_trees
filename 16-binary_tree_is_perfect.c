#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full. 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes, height;

	if (!tree)
		return (0);

	nodes = check_nodes(tree);
	height = binary_tree_height(tree);

	return (nodes == (1 << height) - 1 ? 1 : 0);
}


/**
 * check_nodes - checks number of nodes in a tree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: the number of nodes in the tree
 */
size_t check_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + check_nodes(tree->left) + check_nodes(tree->right));

}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = binary_tree_height(tree->right);
	r = binary_tree_height(tree->left);

	return (1 + (l > r ? l : r));
}
