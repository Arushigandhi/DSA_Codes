#include <iostream>
#include<queue>
using namespace std;
// tree node
class Node
{
public:
 int data;
 Node *left, *right;
};
// returns a new tree Node
Node *newNode(int data)
{
 Node *temp = new Node();
 temp->data = data;
 temp->left = temp->right = NULL;
 return temp;
}
// A function to create binary tree.
Node *create(Node *temp, int data)
{
 // If the tree is empty, return a new node
 if (temp == NULL)
 return newNode(data);
 // Otherwise, recur down the tree
 if (data < temp->data)
 temp->left = create(temp->left, data);
 else
 temp->right = create(temp->right, data);
 //return the (unchanged) node pointer
 return temp;
}
//function to display all the element present in the binary tree
void display (Node* root)
{
 if (!root)
 return;
 display(root->left);
 cout << root->data << " ";
 display(root->right);
}
//function to insert element in binary tree
void insert(Node *root, int value)
{
    Node *curr= root;
    Node *prev= NULL;
    Node *temp= newNode(value);
    if(root==NULL) {
        root= temp;
    }
    else{
        while(curr!=NULL)
        {
            prev= curr;
            if(value< curr->data)
            curr= curr->left;
            else 
            curr= curr->right;
        }
        if(value< prev->data)
        prev->left= temp;
        else
        prev->right= temp;
    }
}

int main() 
{
 cout << "Chinmay Aggarwal" << endl;
 cout << "200911262" << endl;
 int n, arr[20], size;
 Node *root = new Node;
 root = NULL;
 cout << "Enter the size of array : ";
 cin >> size;
 cout << "Enter the elements in array : ";
 for (int i = 0; i < size; i++)
 {
 cin >> arr[i];
 }
 // Construct the binary tree.
 for (int i = 0; i < size; i++)
 {
 root = create(root, arr[i]);
 }
 cout << "\nEnter the Element to be inserted : ";
 cin >> n;
 cout << "\nBefore Inserting, elements are: ";
 display(root);
 insert(root, n);
 cout << "\nAfter Inserting, elements are: ";
 display(root);
 cout << endl;
 return 0; 
 }