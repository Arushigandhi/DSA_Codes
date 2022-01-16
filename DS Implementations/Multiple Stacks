#include<iostream>
using namespace std;
#define max_size 20
class stack {
int top[10];
int bottom[10];
int a[50];
public:
stack(int);
void push(int, int);
void pop(int);
void display(int);
};
stack::stack(int n)
{
 for (int i=0; i<n; i++)
 bottom[i]= top[i]= (max_size/n)*i-1;
}
void stack::push(int i, int x)
{
 if((top[i]==bottom[i+1])||(top[i]==(max_size-1)))
  cout << "Stack is full\n";
  else
  a[++top[i]]= x;
}
void stack::pop(int i)
{
 if (top[i]==bottom[i])
 cout << "Stack is empty\n";
 else
 cout<<"Deleted element is: "<<(a[top[i]--]);
}
void stack::display(int i)
{
 if (top[i]==bottom[i])
 cout<<"Stack is empty\n";
 else
 cout<<"The elements of stack are:\n";
 for (int j=top[i]; j>bottom[i]; j--)
 cout<<a[j]<<"\n";
}
int main()
{
 int no, ele, z, j;
 cout<<"Enter the number of stacks you want if maximum size of array is 20: "<<endl;
 cin>> z;
 stack s(z);
 do
    {
        cout << "\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
        cout << "Enter option\n";
        cin >> no;
        switch (no)
        {
        case 1:
        {
            cout << "\nEnter element to be pushed\n";
            cin >> ele;
            cout << "\nEnter the stack number in which you want your element to be pushed\n";
            cin >> j;
            s.push(j-1, ele);
            break;
        }
        case 2:
        {
            cout << "\nEnter the stack number from which you want your element to be popped\n";
            cin >> j;
            cout<<"The popped element is:\n";
            s.pop(j-1);
            break;
        }
        case 3:
        {
            cout << "\nEnter the stack number which you want to display\n";
            cin>>j;
            s.display(j-1);
            break;
        }
        case 4:
            return 0;
        }
    } while (1);
    return 0;
}
