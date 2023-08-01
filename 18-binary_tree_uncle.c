#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *left, *right, *parent, *gparent;

	if (!node)
		return (NULL);
	else if (!node->parent)
		return (NULL);
	else if (!node->parent->parent)
		return (NULL);

	parent = node->parent;
	gparent = node->parent->parent;
	left = gparent->left;
	right = gparent->right;
	return (left == parent ? right : left);
}
