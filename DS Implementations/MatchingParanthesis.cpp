#include<iostream>
using namespace std;
#define max_size 20
class stack {
int top;
int a[max_size];
public:
    stack() { top = -1; }
    bool Isfull();
    bool Isempty();
    void push(int);
    int pop();
    void display();
};
bool stack::Isfull()
{
    return (top == max_size - 1);
}
bool stack::Isempty()
{
    return (top == -1);
}
void stack::push(int ele)
{
    if (Isfull())
        cout << "\nStack is full\n";
    else
        a[++top] = ele;
}
int stack::pop()
{
    if (Isempty())
    {
        cout << "\nStack is empty\n";
        return -1;
    }
    else
        return a[top--];
}
void stack::display()
{
    if (Isempty())
    {
        cout << "\nStack is empty\n";
    }
    else
    {
        cout << "\nStack Contents\n";
        for (int i = 0; i <= top; i++)
            cout << a[i] << " ";
    }
}
int main()
{
 stack s;
 char arr[20], x;
 int i, t=0;
 cout<<"Enter an expression: "<<endl;
 cin.getline(arr, 20);
 for (i=0; arr[i]!='\0'; i++)
 {
  if (arr[i]=='(' || arr[i]=='[' || arr[i]=='{')
 {
  s.push(arr[i]);
  continue;
 }
        switch (arr[i])
        {
        case ')':
            x= s.pop();
            if (x != '(')
            t= 1;
            break;

        case '}':
            x= s.pop();
            if (x == '{')
            t= 1;
            break;

        case ']':
            x= s.pop();
            if (x == '[')
            t= 1;
            break;
        }
        if(t==1)
        {
         cout<<"The given expression does not have matching paranthesis.";
         exit(0);
        }
}
   if (t==0 && s.Isempty())
   cout<<"The given expression has matching paranthesis.";
   else
   cout<<"The given expression does not have matching paranthesis.";

 return 0;
}
