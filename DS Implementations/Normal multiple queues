#include<iostream>
using namespace std;
# define n 20

class queue{

   int *arr;
   int *front;
   int *rear;
   int size;
   public: 
   queue(int nq){
       size = n/nq;
      arr = new int[n];
      front = new int[nq];
      rear = new int[nq];
      for(int i=0;i<nq;i++){
          rear[i]=front[i]=(size*i)-1;
      }
   }

   void enque(int i,int val){
     if( rear[i]==(size*(i+1)-1)){
        cout<<"full"<<endl;
     }
     else{
         arr[++rear[i]]=val;
     }
   }
   void deque(int i){
       if(rear[i]==(size*i)-1){
           cout<<"Queue "<<i<<" is empty "<<endl;
       }
       else{
           front[i]++;
       }
   }
   void display(int i){
           for(int j=++front[i];j<=rear[i];j++){
               cout<<arr[j]<<" ";
           }
           cout<<endl;
   }
};

int main(){
    queue q(4) ;
    q.enque(0,10);
    q.enque(0,20);
    q.enque(0,30);
    q.enque(0,100);
    q.enque(0,200);
    q.enque(1,40);
    q.enque(1,50);
    q.enque(1,35);
    q.enque(2,45);
    q.deque(1);
    q.enque(0,200);
    q.display(0);
    q.display(1);
    q.display(2);
  
}