#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	left_depth = binary_tree_depth(tree->parent);
	right_depth = binary_tree_depth(tree->parent);
	if (left_depth > right_depth)
		return (left_depth + 1);
	else
		return (right_depth + 1);
}
