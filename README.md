# Binary Trees

## Description

This project focuses on implementing and manipulating binary trees in C.  
You will learn how to create, insert, delete nodes, and traverse the tree using different methods (pre-order, in-order, post-order).

Note: The binary trees here are not necessarily Binary Search Trees (BST), unless specified otherwise.

---

## Learning Objectives

By the end of this project, you will be able to:

- Explain what a binary tree is
- Differentiate between a binary tree and a binary search tree (BST)
- Understand the time complexity benefits compared to linked lists
- Define the depth, height, and size of a binary tree
- Know the different tree traversal methods (pre-order, in-order, post-order)
- Identify properties of complete, full, perfect, and balanced binary trees

---

## Data Structure

```c
/**
 * struct binary_tree_s - Node of a binary tree
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the*
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
---

## Compilation
To compile the source files (example with 0-main.c and 0-binary_tree_node.c):

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-binary_tree_node.c -o binary_tree
```
---

## Usage Example
```c
binary_tree_t *root;

root = binary_tree_node(NULL, 98);
root->left = binary_tree_node(root, 12);
root->right = binary_tree_node(root, 402);
binary_tree_insert_left(root->right, 128);
```
---

## Code Style

- Strict adherence to Betty coding style

- No global variables

- Maximum 5 functions per source file

- All files end with a newline

---

## Author

Loïc Leguen <https://github.com/loicleguen?tab=repositories>
