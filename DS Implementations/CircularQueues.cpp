#include<iostream>
using namespace std;
class CQueue {
int rear, front1, c;
int a[20];
int max_size;
public:
CQueue ()
{
 front1=0;
 rear=0;
 c = 0;
}
void read (int n)
{
  max_size=n;
}
void insertq(int ele)
{
  if (c == max_size) //if((rear+1)%max_size==front1) //
 cout<<"Circular Queue is full.";
 else
 {
  a[rear]= ele;
  rear= (rear+1)%max_size;
  c++; //
 }
}
void delq()
{
 if(c==0) //if(front1==rear) //
 cout<<"Circular Queue is empty.";
 else
 {
  cout<<"Deleted element is: "<<a[front1]<<endl;
  front1= (front1+1)%max_size;
  c--; //
 }
}
void display()
{
 int i;
 if(c==0) //if(front1==rear) //
 cout<<"Circular Queue is empty.";
 else
 {
 cout<<"Contents:\n";
 /*if(front1>rear)
 {
 i= front1;
 while(i<max_size)
 {
 cout<<a[i]<<endl;
 i++;
 }
 i=0;
 while (i<rear)
 {
 cout<<a[i]<<endl;
 i++;
 }
 }
 else
 {
  i= front1;
  while (i<rear)
  {
 cout<<a[i]<<endl;
 i++;
 }
 }*/
 int j;
 for(i=front1, j=1; j<=c; i=(i+1)%max_size, j++)
 cout<<a[i]<<endl;
 }
}
};
int main()
{
 int n, ele, num;
 cout<<"Enter the size of circular queue:\n";
 cin>>num;
 CQueue q;
 q.read(num);
 do
 {
   cout << "\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n";
   cout << "Enter option\n";
   cin >> n;
   switch (n)
        {
        case 1:
        {
            cout << "\nEnter element to be inserted\n";
            cin >> ele;
            q.insertq(ele);
            break;
        }
        case 2:
        {
            q.delq();
            break;
        }
        case 3:
        {
            q.display();
            break;
        }
        case 4:
            return 0;
        }
    } while (1);
    return 0;
}
