#include<iostream>
using namespace std;

class queueSLL{
    public:
    queueSLL * next;
    int data;
    
    queueSLL(int val){
        data=val;
        next=NULL;
    }
};
 void enqueue(queueSLL *&head,int val){
     queueSLL* node = new queueSLL(val);
     queueSLL * temp = head;
     if(head==NULL){
     head = node;
     return;
     }
     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=node;
    
 }
 void dequeue(queueSLL*& head){
     if(head==NULL){
         cout<<"nothing to dequeue"<<endl;
         return;
     }
     queueSLL* temp = head;
     head=head->next;
     temp->next=NULL;
     delete temp;
 }
 void display(queueSLL* head){
     queueSLL* temp = head;
     if(head==NULL){
         cout<<"queue is empty"<<endl;
     }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    } 
    cout<<"NULL"<<endl;
 }

int main(){
  queueSLL *head = NULL;
  enqueue(head,10);
  enqueue(head,20);
  enqueue(head,30);
  enqueue(head,40);
  display(head);
  dequeue(head);
  dequeue(head);
  display(head);
}