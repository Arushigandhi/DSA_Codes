#include <iostream>
#include <string.h>
using namespace std;
class stack {
char s[20][15];
int top;
int size;
public: stack() {
top= -1;
size= 30; }
void push(char a[])
{
 strcpy(s[++top],a);
}
char* pop()
{
 return s[top--];
}
};
void postfixToInfix(char p[])
{
 stack s;
 char t[3];
 int i=0;
 while (p[i]!='\0')
 {
  t[0]= p[i];
  t[1]= '\0';
  if ((p[i]>=48 && p[i]<=57)|| (p[i]>=65 && p[i]<=90)|| (p[i]>=97 && p[i]<=122))
    s.push(t);
    else
   {
    char op1[20], op2[20], temp[40];
    strcpy (op2, s.pop());
    strcpy (op1, s.pop());
    strcpy (temp, "(");
    strcat (temp, op1);
    strcat (temp, t);
    strcat (temp, op2);
    strcat (temp, ")");
    s.push(temp);
   }
  i++;
 }
 cout<<"Infix Expression is: "<<s.pop();
}
int main()
{
 char inf[30];
 cout<<"Enter a postfix expression:\n";
 cin>>inf;
 postfixToInfix(inf);
}
