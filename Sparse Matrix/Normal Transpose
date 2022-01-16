#include<iostream>
using namespace std;
class term {
public:
int row, col, value;
void transpose (term a[])
{
 term b[100];
 int n, i, j, current;
 n= a[0].value;
 b[0].row= a[0].col;
 b[0].col= a[0].row;
 b[0].value= n;
 if (n>0)
 {
   current= 1;
   for (i=0; i<a[0].col; i++)
    for (j=1; j<=n; j++)
    if (a[j].col==i)
    {
     b[current].row= a[j].col;
     b[current].col= a[j].row;
     b[current].value= a[j].value;
     current++;
    }
 }
 cout<<"   \tRow\tCol\tValue\n";
 cout<<"b[0]\t"<<b[0].row<<"\t"<<b[0].col<<"\t"<<b[0].value<<"\n";
 for (i=1; i<=n; i++)
 {
   cout<<"["<<i<<"]\t"<<b[i].row<<"\t"<<b[i].col<<"\t"<<b[i].value<<"\n";
 }
}
};
int main()
{
 term A[100], temp;
 int MAT[20][20], M, N, x, y, k=1, f;
 cout<<"Enter the number of rows:\n";
 cin>>M;
 cout<<"Enter the number of columns:\n";
 cin>>N;
 cout<<"Enter the elements in the matrix:\n";
 for (x=0; x<M; x++)
 {
  for (y=0; y<N; y++)
  {
    cin>>MAT[x][y];
  }
 }
 A[0].row= M;
 A[0].col= N;
 for (x=0; x<M; x++)
 {
  for (y=0; y<N; y++)
  {
   if (MAT[x][y]==0)
   continue;
   A[k].row= x;
   A[k].col= y;
   A[k].value= MAT[x][y];
   k++;
  }
 }
 A[0].value= k-1;
 cout<<"   \tRow\tCol\tValue\n";
 cout<<"a[0]\t"<<A[0].row<<"\t"<<A[0].col<<"\t"<<A[0].value<<"\n";
 for (f=1; f<=A[0].value; f++)
 {
   cout<<"["<<f<<"]\t"<<A[f].row<<"\t"<<A[f].col<<"\t"<<A[f].value<<"\n";
 }
 cout<<endl;
 temp.transpose(A);
}
