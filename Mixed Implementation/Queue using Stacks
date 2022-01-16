#include <iostream>
using namespace std;
#define max_size 30
class stacks {
int top;
char a[10];
public:
    stacks() { top = -1; }
    bool Isfull();
    bool Isempty();
    void push(char);
    char pop();
    void display();
    friend class queues ;
};
bool stacks::Isfull()
{
    return (top == max_size - 1);
}
bool stacks::Isempty()
{
    return (top == -1);
}
void stacks::push(char ele)
{
    if (Isfull())
        cout << "\nStack is full\n";
    else
        a[++top] = ele;
}
char stacks::pop()
{
    if (Isempty())
    {
        cout << "\nStack is empty\n";
        return -1;
    }
    else
        return a[top--];
}
class queues
{
    int j;
 stacks s1, s2;
public:
void enQueue (char x)
{
 s1.push(x);
}
void deQueue (int N)
{
 if (s1.Isempty() && s2.Isempty())
     {
            cout << "Queue is empty";
            exit(0);
     }
     else if (s2.Isempty())
     {
        while (s1.Isempty()==false)
        {
         s2.push(s1.pop());

        }
     }
       cout<<"The elements displayed are in order:"<<'\n';
       for (j=s2.top; j>=0; j--)
       {

        cout<<s2.a[j]<<"\t";
        //s2.pop();
       }
}
};
int main()
{
 class queues q;
 int n, i;
 char z;
 cout<<"Enter the number of elements in queue:"<<'\n';
 cin>>n;
 cout<<"Enter the elements:"<<'\n';
 for (i=0; i<n; i++)
 {
  cin>>z;
  q.enQueue(z);
 }
 q.deQueue(n);
 /*cout<<"The elements displayed are in order:"<<'\n';
 for (i=0; i<n; i++)
 {
  cout<<q.deQueue()<<'\n';
 }*/
 return 0;
}
