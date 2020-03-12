#include "binary_trees.h"

/**
  * BT_levelorder - goes through a binary tree using level-order traversal
  * @tree: root node of the BT
  * @func: function to print the traverse
  * Return: Nothing
  */
void BT_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		func(tree->left->n);
	if (tree->right)
		func(tree->right->n);
	BT_levelorder(tree->left, func);
	BT_levelorder(tree->right, func);
}

/**
  * binary_tree_levelorder - goes through abinarytreeusinglevel-ordertraversal
  * @tree: root node of the BT
  * @func: function to print the traverse
  * Return: Nothing
  */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	BT_levelorder(tree, func);
}
