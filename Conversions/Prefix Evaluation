#include<iostream>
#include<string.h>
using namespace std;
#define max_size 30
class stacks {
int top;
int a[max_size];
public:
stacks() { top = -1; }
bool Isfull();
bool Isempty();
void push(int);
int pop();
void display();
friend void Prefix_Eval(char []);
};
bool stacks::Isfull()
{
return (top == max_size - 1);
}
bool stacks::Isempty()
{
return (top == -1);
}
void stacks::push(int ele)
{
if (Isfull())
cout << "\nStack is full\n";
else
a[++top] = ele;
}
int stacks::pop()
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
void Prefix_Eval(char prefix[])
{
stacks s;
int i=0, op1, op2, temp;
strrev(prefix);
while(prefix[i]!='\0')
{
if(prefix[i]>=48 && prefix[i]<=57)
s.push(prefix[i]-48); //it is an integer stack so prefix[i] will be converted from char to int when we apply a stack function.
else if((prefix[i]>=65 && prefix[i]<=90)||(prefix[i]>=97 && prefix[i]<=122))
{
cout<<"Enter the value of: "<<prefix[i]<<endl;
cin>>temp;
s.push(temp);
}
else
{
op1= s.pop();
op2= s.pop();
switch (prefix[i])
{
case '+':
{
s.push(op1+op2);
break;
}
case '-':
{
s.push(op1-op2);
break;
}
case '*':
{
s.push(op1*op2);
break;
}
case '/':
{
s.push(op1/op2);
break;
}
case '%':
{
s.push(op1%op2);
break;
}
}
}
i++;
}
cout<<"The result of the above Prefix Expression is:\n"<<s.pop();
}
int main()
{
char arr[30];
cout<<"Enter a prefix expression:\n";
cin>>arr;
Prefix_Eval(arr);
}

