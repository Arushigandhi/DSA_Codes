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
    int n, ele;

    do
    {
        cout << "\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
        cout << "Enter option\n";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            cout << "\nEnter element to be pushed\n";
            cin >> ele;
            s.push(ele);
            break;
        }
        case 2:
        {
            cout <<"The popped element is: "<< s.pop() << " ";
            break;
        }
        case 3:
        {
            s.display();
            break;
        }
        case 4:
            return 0;
        }
    } while (1);
    return 0;
}
