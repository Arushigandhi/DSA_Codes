#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i, j, key, m = 0, l = 0, h = n-1,pos =0;
    int a[n];
    cout << "Enter a sorted array of integers" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter the element to be searched" << endl;
    cin >> key;
    for (j = 0; j < n; j++)
    {
    
        m = (l + h) / 2;
        if (a[m] == key)
        { 
           pos = 1;
           
            break;
        }
        else if (a[m] > key)
        {
            h = m - 1;
        }
        else if (a[m] < key)
        {
            l = m + 1;
        }
    }
    if(pos == 1){
        cout<<"element fount at pos"<<m+1<<endl;    }
        else{
            cout<<"not found"<<endl;
        }
}