#include "binary_trees.h"

/**
  * binary_tree_levelorder - goes through abinarytreeusinglevel-ordertraversal
  * @tree: root node of the BT
  * @func: function to print the traverse
  * Return: Nothing
  */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (!tree->parent)
			func(tree->n);
		if (tree->left)
			func(tree->left->n);
		if (tree->right)
			func(tree->right->n);
		binary_tree_levelorder(tree->left, func);
		binary_tree_levelorder(tree->right, func);
	}
}
