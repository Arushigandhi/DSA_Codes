#include<iostream>
#include<string.h>
using namespace std;
#define max_size 20
class stack {
int top;
char a[max_size];
public:
    stack() { top = -1; }
    bool Isfull();
    bool Isempty();
    void push(char);
    char pop();
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
void stack::push(char ele)
{
    if (Isfull())
        cout << "\nStack is full\n";
    else
        a[++top] = ele;
}
char stack::pop()
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
    int i, n, ele;
    char str[100], str_rev[100];
    cout << "Enter a string\n";
    cin >> str;
    for (i = 0; str[i] != '\0'; i++)
        s.push(str[i]);
    n = i;
    for (i = 0; i < n; i++)
    {
        ele = s.pop();
        str_rev[i] = ele;
    }
    str_rev[i] = '\0';

    cout << "Reversed string is\n" << str_rev << endl;

    if (strcmp(str, str_rev) == 0)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
    return 0;
}
