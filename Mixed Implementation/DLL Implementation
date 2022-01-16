#include<iostream>
using namespace std;
class dnode
{
  public:
  int info;
  dnode *llink;
  dnode *rlink;
  dnode(int data)
  {
    info= data;
    llink= NULL;
    rlink= NULL;
  }
};
    dnode* ins_end(dnode *start)
    {
        int data;
        dnode *curr= start;
        cout<<"Enter an element:";
        cin>>data;
        dnode *temp= new dnode(data);
        if(start==NULL)
        {
            start= temp;
            return start;
        }
        while(curr->rlink!=NULL)
            {
                curr= curr->rlink;
            }
            curr->rlink= temp;
            temp->llink= curr;
            temp->rlink= NULL;
            return start;
    }
    dnode* ins_beg(dnode *start)
    {
        int data;
        dnode *curr= start;
        cout<<"Enter an element:";
        cin>>data;
        dnode *temp= new dnode(data);
        if(start==NULL)
        {
            start= temp;
            return start;
        }
            temp->rlink= curr;
            curr->llink= temp;
            start= temp;
            curr= start;
            return start;
    }
    dnode* ins_before(dnode *start)
    {
        int data;
        int x;
        dnode *curr= start;
        cout<<"Enter an element:";
        cin>>data;
        dnode *temp= new dnode(data);
         if(start==NULL)
        {
            cout<<"There is no element in the list initially.\n";
            return start;
        }
        cout<<"Enter the element before which you want to insert:";
        cin>>x;
        if (curr->info==x)
        {
            temp->rlink= curr;
            curr->llink= temp;
            start= temp;
            curr= start;
            return start;
        }
            while((curr->rlink->info!=x) && (curr->rlink!=NULL))
            {
                curr= curr->rlink;
            }
            if ((curr->rlink==NULL) && (curr->info!=x))
            {
                cout<<"The element does not exist in the list.\n";
                return start;
            }
               temp->rlink = curr->rlink;
               curr->rlink->llink=temp;
               curr->rlink= temp;
               temp->llink=curr;
               return start;
    }
    dnode* ins_after(dnode *start)
    {
        int data;
        int x;
        dnode *curr= start;
        cout<<"Enter an element:";
        cin>>data;
        dnode *temp= new dnode(data);
         if(start==NULL)
        {
            cout<<"There is no element in the list initially.\n";
            return start;
        }
        cout<<"Enter the element after which you want to insert:";
        cin>>x;
            while((curr->info!=x) && (curr->rlink!=NULL))
            {
                curr= curr->rlink;
            }
            if ((curr->rlink==NULL) && (curr->info!=x))
            {
                cout<<"The element does not exist in the list.\n";
                return start;
            }
            if ((curr->rlink==NULL) && (curr->info==x))
            {
                curr->rlink= temp;
                temp->llink= curr;
                temp->rlink= NULL;
                return start;
            }
               temp->rlink = curr->rlink;
               curr->rlink->llink=temp;
               curr->rlink= temp;
               temp->llink=curr;
               return start;
    }
    dnode* insert_pos(dnode *start)
    {
       int pos, i, j,pos1=1, data;
       dnode *curr= start;
       cout<<"Enter an element:";
       cin>>data;
       dnode *temp= new dnode(data);
       while(curr!=NULL)
       {
           curr=curr->rlink;
           pos1++;
       }
            curr=start;
            cout<<"Enter the position at which you want to insert the element:";
            cin>>pos;
            if(pos>pos1)
        {
            cout<<"position out of bounds \n"<<endl;
            return start;
        }
            if(pos==1)
            {
               temp->rlink= curr;
               curr->llink= temp;
               start= temp;
               curr= start;
               return start;
            }
            for(i=1; i<pos-1; i++)
            {
             curr= curr->rlink;
            }
            if (curr->rlink==NULL)
            {
                curr->rlink= temp;
                temp->llink= curr;
                temp->rlink= NULL;
                return start;
            }
            temp->rlink = curr->rlink;
            curr->rlink->llink=temp;
            curr->rlink= temp;
            temp->llink=curr;
            return start;
    }
    dnode* delete_ele(dnode *start)
    {
       int x;
       dnode *t;
       dnode *curr= start;
        if(start==NULL)
        {
            cout<<"There is no element in the list initially.\n";
            return start;
        }
            cout<<"Enter the element you want to delete:";
            cin>>x;
            if ((curr->info==x) && (curr->rlink!=NULL))
        {
            t= curr;
            curr->rlink->rlink->llink= curr->rlink;
            start= curr->rlink;
            delete t;
            return start;
        }
        if ((curr->info==x) && (curr->rlink==NULL))
        {
            t= curr;
            start= NULL;
            curr= start;
            delete t;
            return start;
        }
            while((curr->rlink->info!=x) && (curr->rlink!=NULL))
            {
               curr= curr->rlink;
            }
            if((curr->rlink==NULL) && (curr->rlink->info!=x))
            {
                cout<<"Element not found.\n";
                return start;
            }
             if(curr->rlink->rlink==NULL)
            {
                t= curr->rlink;
                curr->rlink= curr->rlink->rlink;
                delete t;
                return start;
            }
            t= curr->rlink;
            curr->rlink= curr->rlink->rlink;
            curr->rlink->llink= curr;
            delete t;
            return start;
    }
    dnode* delete_pos(dnode *start)
    {
       int pos, i, j,pos1=0;
       dnode *t;
       dnode *curr= start;
       while(curr!=NULL)
       {
           curr=curr->rlink;
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
            for(i=1; i<pos-1; i++)
            {
             curr= curr->rlink;
            }
            if((pos==1) && (curr->rlink==NULL))
            {
                t= curr;
                start= NULL;
                curr= start;
                delete t;
                return start;
            }
            if(pos==1)
            {
                t= curr;
                start= curr->rlink;
                delete t;
                return start;
            }
            if(curr->rlink->rlink==NULL)
            {
                t= curr->rlink;
                curr->rlink= curr->rlink->rlink;
                delete t;
                return start;
            }
            t= curr->rlink;
            curr->rlink= curr->rlink->rlink;
            curr->rlink->llink= curr;
            delete t;
            return start;
    }
    dnode* delete_end(dnode *start)
     {
       int x;
       dnode *t;
       dnode *curr= start;
        if(start==NULL)
        {
            cout<<"There is no element in the list initially.\n";
            return start;
        }
        if(curr->rlink==NULL)
        {
            t= curr;
            start= NULL;
            delete t;
            return start;
        }
            while(curr->rlink->rlink!=NULL)
            {
                curr= curr->rlink;
            }
            t= curr->rlink;
            curr->rlink= NULL;
            delete t;
            return start;
     }
    void display(dnode *start)
    {
        int x=0;
        dnode *curr= start;
        
        if(curr==NULL)
        {
          cout<<"The list is empty.\n";
          return;
        }
        else
        {
            cout<<"The elements in the linked list are:";
        {
            cout<<"NULL<-"<<(curr->info);
        }
        }
        while(curr->rlink!=NULL)
        {
           cout<<"->"<<"<-"<<(curr->rlink->info);
           curr= curr->rlink;
           //x++;
        }
       /* if(x>0)
        cout<<(curr->info)<<"->NULL"<<endl;
        else */
        cout<<"->NULL"<<endl;
    }
 
int main()
{
    dnode *start= NULL;
    int y, x;
    while(1)
    {
        cout<<" 1.INSERT\n 2.INSERT AT HEAD\n 3.INSERT BEFORE AN ELEMENT\n 4.INSERT AFTER AN ELEMENT\n 5.INSERT AT POS\n 6.DELETE AN ELEMENT\n 7.DELETE AT POS\n 8.DELETE AT TAIL\n 9.DISPLAY\n 10.EXIT"<<endl;
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
        start= insert_pos(start);
        break;
        case 6:
        start= delete_ele(start);
        break;
        case 7:
        start= delete_pos(start);
        break;
        case 8:
        start= delete_end(start);
        break;
        case 9:
        display(start);
        break;
        case 10:
        exit(0);
    }
    }
}

