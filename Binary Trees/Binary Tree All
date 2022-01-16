#include <iostream>
using namespace std;
class btree {
public:
int data;
btree* left;
btree* right;
};
btree* newNode(int var)
{
btree* temp = new btree;
temp->data = var;
temp->left = NULL;
temp->right = NULL;
return temp;
}
int getNodeCount(btree *root)
{
    if(!root) {
    return 0;
    }
   return 1 + getNodeCount(root->left) + getNodeCount(root->right);
}

int getLeafCount(btree *root)
{
if(root == NULL)
return 0;
if(root->left == NULL && root->right == NULL) 
return 1;
else
return getLeafCount(root->left)+
getLeafCount(root->right);
}

int getParentCount(btree *root)
{
if(root == NULL)
return 0;
if(root->left != NULL || root->right != NULL) 
return 1 +  getParentCount(root->left)+ getParentCount(root->right);
else
return 0;
}

btree* insert(btree* root, int val){
    btree* node = newNode(val);
    btree *q[30];
    int front = 0, rear = 0;
    btree *curr = root;
    if (root == NULL)
    {
        root = node;
        return root;
    }
    else
    {
        q[rear++] = curr;
        while (front != rear)
        {
            if (curr->left){
                q[rear++] = curr->left;
            }
                else{
                    curr->left = node;
                    return root;
                }
            if (curr->right){
                q[rear++] = curr->right;
            }
                else{
                    curr->right = node;
                    return root;
                }
            curr = q[++front];
        }
    }
    return root;
}

btree* copyTree(btree * root)
{
    btree *temp;
    temp= newNode(root->data);
   if(root)
   {
       if(root->left)
       temp->left= copyTree(root->left);
       if(root->right)
       temp->right= copyTree(root->right);
       temp->data= root->data;
       return(temp);
   }
   return NULL;
}

int PrintAncestors(btree * root, int target)
{
    btree *curr= root;
    if(curr==NULL) {
    return 0;
    }
    if(curr->data==target) {
    return 1;
    }
    if((PrintAncestors(curr->left, target)) || (PrintAncestors(curr->right, target)))
    {
        cout<<curr->data<<" ";
        return 1;
    }
    return 0;
}

int getParentNode(btree* root, int key)
{
    btree* curr = root;
    if(curr==NULL || curr->data == key){
        return 0;
    }
    if(curr->left->data==key ||curr->right->data==key ){
        return curr->data;
    }
    if( getParentNode(curr->left,key)){
    return  getParentNode(curr->left,key);
    } 
     return getParentNode(curr->right,key);
}

int max(int a, int b)
{
    int m= (a>b)?a:b;
    return m;
}
int HeightTree(btree *root)
{
    if(root==NULL)
    return 0;
    return(max(HeightTree(root->left), HeightTree(root->right)) +1);
}

void inorder(btree *root)
{
    btree *s[20];
    int top= -1;
    btree *ptr= root;       
    for(;;)    //while(1)
    {
        for(; ptr; ptr=ptr->left) {
        s[++top]= ptr;              
        }
        if(top>=0)                   
        ptr= s[top--];                
        else
        break;
        cout<<ptr->data<<" ";
        ptr=ptr->right;
    }
}

void preorder(btree *root)
{
    btree *s[20];
    int top= -1;
    btree *ptr= root;
    for(;;)
    {
        for(; ptr; ptr=ptr->left)
        {
           cout<<ptr->data<<" ";
           s[++top]= ptr;
        }
        if(top>=0)
        ptr= s[top--];
        else
        break;
        ptr=ptr->right;
    }
}

void postorder(btree *root)
{
if (root == NULL)
return;
postorder(root->left);
postorder(root->right);
cout << root->data << " ";
}

void levelorder(btree *root)
{
    btree *q[30];
    int front= 0, rear= 0;
    btree *curr= root;
    if (root==NULL) {
        return;
    }
    else
    {
        q[rear++]= curr;
        while (front!=rear) {
            if(curr->left)
             q[rear++]= curr->left;
             if(curr->right)
             q[rear++]= curr->right;
             cout<<curr->data<<" ";
             curr= q[++front]; 
        }
    }
}

int main()
{
cout<<"Chinmay Aggarwal"<<endl;
cout<<"200911262"<<endl;
btree* root = newNode(1);
btree *NewRoot;
root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->left->right = newNode(5);
root->right->left = newNode(6);
root->right->right = newNode(7);
cout << "\nPreorder traversal of binary tree is \n";
preorder(root);
cout << "\nInorder traversal of binary tree is \n";
inorder(root);
cout << "\nPostorder traversal of binary tree is \n";
postorder(root);
cout << "\nLevelorder traversal of binary tree is \n";
levelorder(root);
cout<<"\nNumber of leaf nodes = "<<getLeafCount(root);
cout<<"\nNumber of parent nodes = "<<getParentCount(root);
cout<<"\nNumber of total nodes = "<<getNodeCount(root);
insert(root, 8);
cout<<"\nThe postorder of the new binary tree is: ";
postorder(root);
NewRoot= copyTree(root);
cout<<"\nThe postorder of the copied binary tree is: ";
postorder(NewRoot);
cout<<"\nThe ancestors of target node is: ";
PrintAncestors(root, 6);
cout<<"\nThe parent node of 5 is: ";
cout<<getParentNode(root, 5);
cout<<"\nThe height of binary tree is: ";
cout<<HeightTree(root);
return 0;
}