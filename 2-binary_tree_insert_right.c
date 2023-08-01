#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to put in the new node
 *
 * Return: pointer to the newly created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	/* create new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = parent->right;

	/* inserts node to the appropraite point */
	parent->right ? parent->right->parent = new_node : 0;
	parent->right = new_node;

	return (new_node);
}
