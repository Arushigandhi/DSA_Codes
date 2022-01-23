#include<iostream>
using namespace std;
class node
{
    public:
    int info;
    node *next;
    node(int data)
    {
    info = data;
    next = NULL;
    }
};
    node* ins_end(node* start)
    {
        int data;
        node *curr= start;
        cout<<"Enter an element:";
        cin>>data;
        node *temp= new node(data);
        if(start==NULL)
        {
            start= temp;
            return start;
        }
            while(curr->next!=NULL)
            {
                curr= curr->next;
            }
            curr->next= temp;
            return start;
    }
    node* ins_beg(node *start)
    {
        int data;
        node *curr= start;
        cout<<"Enter an element:";
        cin>>data;
        node *temp= new node(data);
        if(start==NULL)
        {
            start= temp;
            return start;
        }
            temp->next= curr;
            start= temp;
            curr= start;
            return start;
    }
    node* ins_before(node *start)
    {
        int data;
        int x;
        node *curr= start;
        cout<<"Enter an element:";
        cin>>data;
        node *temp= new node(data);
         if(start==NULL)
        {
            cout<<"There is no element in the list initially.\n";
            return start;
        }
        cout<<"Enter the element before which you want to insert:";
        cin>>x;
        if (curr->info==x)
        {
            temp->next= curr;
            start= temp;
            curr= start;
            return start;
        }
            while((curr->next->info!=x) && (curr->next!=NULL))
            {
                curr= curr->next;
            }
            if (curr->next==NULL)
            {
                cout<<"The element does not exist in the list.\n";
                return start;
            }
               temp->next = curr->next;
               curr->next= temp;
               return start;
    }
    node* ins_after(node *start)
    {
        int data;
        int x;
        node *curr= start;
        cout<<"Enter an element:";
        cin>>data;
        node *temp= new node(data);
         if(start==NULL)
        {
            cout<<"There is no element in the list initially.\n";
            return start;
        }
        cout<<"Enter the element after which you want to insert:";
        cin>>x;
            while((curr->info!=x) && (curr->next!=NULL))
            {
                curr= curr->next;
            }
            if ((curr->next==NULL) && (curr->info!=x))
            {
                cout<<"The element does not exist in the list.\n";
                return start;
            }
               temp->next = curr->next;
               curr->next= temp;
               return start;
    }
    node* delete_ele(node *start)
    {
       int x;
       node *t;
       node *curr= start;
        if(start==NULL)
        {
            cout<<"There is no element in the list initially.\n";
            return start;
        }
            cout<<"Enter the element you want to delete:";
            cin>>x;
            if (curr->info==x)
        {
            t= curr;
            start= curr->next;
            delete t;
            return start;
        }
            while((curr->next->info!=x) && (curr->next!=NULL))
            {
               curr= curr->next;
            }
            if(curr->next==NULL)
            {
                cout<<"Element not found.\n";
                return start;
            }
             t= curr->next;
             curr->next= curr->next->next;
             delete t;
             return start;
    }
     node* delete_pos(node *start)
    {
       int pos, i, j,pos1=0;
       node *t;
       node *curr= start;
       while(curr!=NULL)
       {
           curr=curr->next;
           pos1++;
       }
        if(start==NULL)
        {
            cout<<"There is no element in the list initially.\n";
            return start;
        }
            curr=start;
            cout<<"Enter the position at which you want to delete the element:";
            cin>>pos;
            if(pos>pos1)
        {
            cout<<"position out of bounds \n"<<endl;
            return start;
        }
            if(pos==1)
            {
             t= curr;
             start= curr->next;
             delete t;
             return start;
            }

            for(i=1; i<pos-1; i++)
            {
             curr= curr->next;
            }
            t= curr->next;
            curr->next= curr->next->next;
            delete t;
            return start;
    }
     node* delete_end(node *start)
     {
       int x;
       node *t;
       node *curr= start;
        if(start==NULL)
        {
            cout<<"There is no element in the list initially.\n";
            return start;
        }
        if(curr->next==NULL)
        {
            t= curr;
            start= NULL;
            delete t;
            return start;
        }
            while((curr->next)->next!=NULL)
            {
                curr= curr->next;
            }
            t= curr->next;
            curr->next= NULL;
            delete t;
            return start;
     }
     void display(node *start)
     {
        node *curr= start;
        cout<<"The elements in the linked list are:";
        while(curr!=NULL)
        {
           cout<<(curr->info)<<"->";
           curr= curr->next;
        }
        cout<<"NULL"<<endl;
     }
int main()
{
    node *start= NULL;
    int y, x;
    while(1)
    {
        cout<<" 1.INSERT\n 2.INSERT AT HEAD\n 3.INSERT BEFORE AN ELEMENT\n 4.INSERT AFTER AN ELEMENT\n 5.DELETE AN ELEMENT\n 6.DELETE AT POS\n 7.DELETE AT TAIL\n 8.DISPLAY\n 9.EXIT"<<endl;
    cin>>y;
    switch(y)
    {
        case 1:
        start= ins_end(start);
        break;
        case 2:
        start= ins_beg(start);
        break;
        case 3:
        start= ins_before(start);
        break;
        case 4:
        start= ins_after(start);
        break;
        case 5:
        start= delete_ele(start);
        break;
        case 6:
        start= delete_pos(start);
        break;
        case 7:
        start= delete_end(start);
        break;
        case 8:
        display(start);
        break;
        //case 9:
        //exit(0);
    }
    }
}
