#include<iostream>
#include<string.h>
using namespace std;
#define max_size 30
enum precedence {lparen, rparen, pluss, minuss, times, divide, mod, eos, operand};
int icp[]= {20, 19, 12, 12, 13, 13, 13, 0};
int isp[]= {0, 19, 12, 12, 13, 13, 13, 0};
precedence get_token(char c)
{
 switch (c)
 {
  case '(':
  return lparen;
  case ')':
  return rparen;
  case '+':
  return pluss;
  case '-':
  return minuss;
  case'*':
  return times;
  case '/':
  return divide;
  case '%':
  return mod;
  case '#':
  return eos;
  default:
  return operand;
 }
}
class stacks {
int top;
char a[max_size];
public:
    stacks() { top = -1; }
    bool Isfull();
    bool Isempty();
    void push(char);
    char pop();
    void display();
    friend void Infix_Postfix(char []);
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
/*void stack::display()
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
}*/
void Infix_Postfix (char infix[])
{
 int j=0, k=0;
 precedence temp;
 stacks s;
 char postfix[30];
 s.push('#');
 while (infix [j]!='\0')
 {
  temp= get_token(infix[j]);
  if (temp==operand)
  postfix[k++]=infix[j];
  else if (temp==rparen)
  {
   while(s.a[s.top]!='(')
   postfix[k++]= s.pop();
   s.pop(); //to pop the left paranthesis
  }
  else
  {
   while(icp[temp]<=isp[get_token(s.a[s.top])])
   postfix[k++]= s.pop();
   s.push(infix[j]);
  }
  j++;
 }
  while (s.top>0)
  postfix[k++]= s.pop();
  postfix[k]= '\0';
  cout<<"Postfix Expression is:\n"<<postfix;
}
int main()
{
 char arr[30];
 int i;
 cout<<"Enter an infix expression:\n";
 cin>>arr;
 Infix_Postfix(arr);
}
