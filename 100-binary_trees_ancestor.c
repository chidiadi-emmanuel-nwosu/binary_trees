#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *_first, *_second;

	_first = (binary_tree_t *)first;
	_second = (binary_tree_t *)second;

	if ((!first || !second) || (!first->parent && !second->parent))
		return (NULL);

	for (; _first; _first = _first->parent)
		if (node_is_present(_first, _second))
			return (_first);

	for (; _second; _second = _second->parent)
		if (node_is_present(_second, _first))
			return (_second);

	return (NULL);
}


/**
 * node_is_present - checks if a node is a member of a root node
 * @root: pointer to the root node
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a memebr of root. 0 otherwise
 */
int node_is_present(const binary_tree_t *root, const binary_tree_t *node)
{
	if (!root)
		return (0);
	else if (root == node)
		return (1);
	return (node_is_present(root->left, node) ||
			node_is_present(root->right, node));
}
