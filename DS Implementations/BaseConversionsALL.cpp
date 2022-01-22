#include<iostream>
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
        //cout << "\nStack Contents\n";
        for (int i = top; i >=0; i--)
            cout << a[i] << " ";
    }
}
int main()
{
    int n, j, temp1, k, temp2, m, temp3, q, no;
    char p;
    stack s;
    cout << "Enter a number:\n";
    cin >> n;
    cout << "\n 1.Binary 2.Octal 3.Hexadecimal \n";
    cout << "Enter option in which you want to convert your decimal number to\n";
    cin>> no;
    switch (no)
    {
     case 1:
     {
     temp1 = n;
     while(true)
    {
        if (temp1 > 1)
        {
            j = temp1 % 2;
            temp1 = temp1 / 2;
            s.push(j+48);
        }
        else
        {
            s.push(temp1+48);
            break;
        }
    }
    cout << "The binary equivalent is ";
    s.display();
    break;
    }
    case 2:
    {
     temp2 = n;
     while(true)
    {
        if (temp2 > 7)
        {
            k = temp2 % 8;
            temp2 = temp2 / 8;
            s.push(k+48);
        }
        else
        {
            s.push(temp2+48);
            break;
        }
    }
    cout << "The octal equivalent is ";
    s.display();
     break;
    }
    case 3:
    {
     temp3 = n;
     while(true)
    {
            m = temp3 % 16;
            if (temp3!=0)
            {
            switch (m)
             {
             case 10:
             {
              s.push(m+55);
              break;
             }
             case 11:
             {
              s.push(m+55);
              break;
             }
             case 12:
             {
              s.push(m+55);
              break;
             }
             case 13:
             {
              s.push(m+55);
              break;
             }
             case 14:
             {
              s.push(m+55);
              break;
             }
             case 15:
             {
              s.push(m+55);
              break;
             }
             default:
             {
            s.push(m+48);
             }
            }
          }
          else
          break;
          temp3 = temp3 / 16;
     }
    cout << "The hexadecimal equivalent is ";
    s.display();
     break;
   }
   default:
   cout<<"Not selected a valid option.";
 }
}
