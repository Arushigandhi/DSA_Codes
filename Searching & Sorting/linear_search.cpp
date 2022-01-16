#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j,key,pos=0,a[n];
    cout<<"Enter an array of "<<n<<" integers"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element to be searched"<<endl;
    cin>>key;
    for(j=0;j<n;j++){
        if(a[j]==key){
            pos=1;
        break;
        }
    }
    if(pos==1)
    cout<<"element found at poition "<<j+1<<endl;
    else
    cout<<"Wrong input"<<endl;
}