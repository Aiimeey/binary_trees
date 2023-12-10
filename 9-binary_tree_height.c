#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height for tree
 *
 * Return: size_t representing height, 0 on failure or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_subtree_size = 0;
	size_t r_subtree_size = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		l_subtree_size = 1 + binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		r_subtree_size = 1 + binary_tree_height(tree->right);
	}

	return ((l_subtree_size > r_subtree_size) ? l_subtree_size : r_subtree_size);
}
