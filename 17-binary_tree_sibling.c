#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left, *right;

	if (!node)
		return (NULL);
	else if (!node->parent)
		return (NULL);
	left = node->parent->left;
	right = node->parent->right;
	return (left == node ? right : left);
}
