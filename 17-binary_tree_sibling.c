#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full. 0 otherwise
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
