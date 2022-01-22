#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(){
        next=nullptr;
    }
};
class Header{
    public:
    int n;
    Header * next;
    Node *nodehead;
    Header(){
        next=nullptr;
        nodehead=nullptr;
    }
};
Header* createHeader(Header *root, int i){
    Header *temp=new Header;
    temp->n=i;
    root->next=temp;
    return root;
}
Header* CreateHeaderList(Header *root, int n){
    if(n==0)
        return nullptr;
    if(root==nullptr){
        Header *temp=new Header;
        temp->n=1;
        root=temp;
    }
    Header *trace=root;
    for(int i=2; i<=n; i++){
        root=createHeader(root, i);
        root=root->next;
    }
    return trace;
}
void PrintHeader(Header *root){
    if(root==nullptr)
            return;
    cout<<root->n<<"----->";
    Node *head=root->nodehead;
    while(head!=nullptr){
        cout<<head->data<<"---->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
    PrintHeader(root->next);
}
Node *insertInSLL(Node *root, int val){
    if(root==nullptr){
        Node *temp=new Node();
        temp->data=val;
        return temp;
    }
    else
        root->next=insertInSLL(root->next,val);
    return root;
}
Header *popFromSLL(Header *head,Node *root){
    if(root==nullptr){
        cout<<"Empty QUEUE!"<<endl;
    }
    else{
        Node *temp=root;
        head->nodehead=root->next;
        delete temp;
    }
    return head;
}
Header *pushInQueue(Header *root, int val){
    root->nodehead=insertInSLL(root->nodehead,val);
    return root;
}
Header *PopFromQueue(Header *root){
    root=popFromSLL(root,root->nodehead);
    return root;
}
Header *traverseHeader(Header *root, int key, int val, int op){
    if(root->n==key){
        if(op==1)
            root=pushInQueue(root, val);
        else
            root=PopFromQueue(root);
        return root;
    }
    root->next=traverseHeader(root->next, key, val,op);
    return root;
}
int main(){
    cout<<"Enter number of queues: ";
    int n;
    cin>>n;
    Header *head=NULL;
    head=CreateHeaderList(head, n);
    int t=-1;
    while(t!=0){
        cout<<"Press 1 to ENQUEUE \nPress 2 to DEQUEUE \nPress 3 to EXIT\n";
        cout<<"Enter your choice: ";
        cin>>t;
        switch (t) {
            case 1:
                cout<<"Enter queue number to insert in: ";
                int key;
                cin>>key;
                if(key>n){
                    break;
                }
                cout<<"Enter element to insert: ";
                int val;
                cin>>val;
                head=traverseHeader(head, key,val,1);
                PrintHeader(head);
                break;
            case 2:
                cout<<"Enter queue number to delete from: ";
                int no;
                cin>>no;
                head=traverseHeader(head, no, 0, 0);
                PrintHeader(head);
                break;
                
            default:
                t=0;
                break;
        }
        
    }

    
}