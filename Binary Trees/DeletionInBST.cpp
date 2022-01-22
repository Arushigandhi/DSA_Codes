#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class node
{
public:
 int key;
 class node *left, *right;
};
node *newNode(int item)
{
 node *temp = new node();
 temp->key = item;
 temp->left = temp->right = NULL;
 return temp;
}

void inordertraversal(node *root)
{
 if (root != NULL)
 {
 inordertraversal(root->left);
 cout << root->key << " ";
 inordertraversal(root->right);
 }
}

node *create(node *node, int key)
{
 if (node == NULL)
 return newNode(key);
 if (key < node->key)
 node->left = create(node->left, key);
 else
 node->right = create(node->right, key);
 return node;
}

node *minValueNode(node *node1)
{
 node *current = node1;
 while (current && current->left != NULL)
 current = current->left;
 return current;
}

node *deleteNode(node *root, int key)
{
 if (root == NULL)
 return root;
 if (key < root->key)
 root->left = deleteNode(root->left, key);
 else if (key > root->key)
 root->right = deleteNode(root->right, key);
 else
 {
 if (root->left == NULL)
 {
 node *temp = root->right;
 free(root);
 return temp;
 }
 else if (root->right == NULL)
 {
 node *temp = root->left;
 free(root);
 return temp;
 }
 node *temp = minValueNode(root->right);
 root->key = temp->key;
 root->right = deleteNode(root->right, temp->key);
 }
 return root;
}

int main()
{
 cout << "Chinmay Aggarwal" << endl;
 cout << "200911262" << endl;
 node *root = NULL;
 root = create(root, 5);
 root = create(root, 3);
 root = create(root, 2);
 root = create(root, 4);
 root = create(root, 7);
 root = create(root, 6);
 root = create(root, 8);
 cout << "Inorder traversal of the given tree \n";
 inordertraversal(root);
 cout << "\nDelete 2\n";
 root = deleteNode(root, 2);
 cout << "Inorder traversal of the modified tree \n";
 inordertraversal(root);
 cout << "\nDelete 3\n";
 root = deleteNode(root, 3);
 cout << "Inorder traversal of the modified tree \n";
 inordertraversal(root);
 cout << "\nDelete 5\n";
 root = deleteNode(root, 5);
 cout << "Inorder traversal of the modified tree \n";
 inordertraversal(root);
 return 0;
}