#include<iostream>
using namespace std;
class term {
public:
int row, col, value;
void fast_transpose (term a[])
{
 term b[100];
 int row_terms [100], starting_pos[100];
 int i, j, num_cols= a[0].col, num_terms= a[0].value;
 b[0].row=num_cols; b[0].col= a[0].row;
 b[0].value= num_terms;
 if(num_terms>0)
 {
 for (i=0; i<num_cols; i++)
 row_terms[i]= 0;
 for (i=1; i<=num_terms; i++)
 row_terms[a[i].col]++;
 starting_pos[0]= 1;
 for (i=1; i<num_cols; i++)
 starting_pos[i]= starting_pos[i-1] + row_terms[i-1];
 for (i=1; i<=num_terms; i++)
 {
  j= starting_pos[a[i].col]++;
  b[j].row= a[i].col;
  b[j].col= a[i].row;
  b[j].value= a[i].value;
  }
 }
 cout<<"   \tRow\tCol\tValue\n";
 cout<<"b[0]\t"<<b[0].row<<"\t"<<b[0].col<<"\t"<<b[0].value<<"\n";
 for (i=1; i<=num_terms; i++)
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
 temp.fast_transpose(A);
}
