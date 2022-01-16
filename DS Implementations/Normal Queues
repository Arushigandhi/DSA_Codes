#include<iostream>
using namespace std;
#define q_size 20 // Size of the queue is initialized to 20
 class queue
 {
int front, rear;
int q[20]; // Size of the array used to implement queue is 20
public:
void insertq(int item); // Add element into the queue
int delq(); // Delete an element from the queue
void display(); // Display elements of the queue
queue()
{
 front=0;// initialize the index which is used for removing the
 //element to the first inserted element
 rear=-1;// initialize the index which is used for adding an
 //element to the queue beyond the initial index of zero
}
};
void queue::insertq(int item)
{
if(rear==q_size-1) //Check if the index reaches the size of
 // the array storing the queue elements
{
cout<<"Queue overflow\n";
return;
}
rear=rear+1; // Increment the index to store new element
q[rear]=item; // Add the element/item at the specified index
}
int queue::delq()
{
if(front>rear) return -1;//Criteria for checking if the queue is
 //empty.Return a value of -1 on queue empty
return q[front++];// Return the contents of the queue which is the
 //one which is to be deleted to the invoking function
}
void queue:: display()
{
int i;
if(front>rear) // Criteria to check if the queue is empty
{
cout<<"Empty queue\n";
return;
 }
cout<<"Contents:\n";
for(i=front;i<=rear;i++)
cout<<q[i]<<endl;
}
int main()
{
queue q;
 int n, ele;
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
            cout <<"The deleted element is: "<< q.delq() << " \n";
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

