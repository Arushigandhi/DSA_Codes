#include<iostream>
using namespace std;

class matrix {
public:
	int row,col,value;
};

void initMatrix(int a[20][20], matrix A[100],int m,int n) {
	int i,j,k=1,f;
	cout << "Enter the elements in the matrix : " << endl;

	for (i=0;i <m;i++) {
		for (j=0;j<n;j++) {
			cin >> a[i][j];
		}
	}

	A[0].row = m;
	A[0].col = n;

	for (i=0;i <m;i++) {
		for (j=0;j<n;j++) {

			if (a[i][j] == 0) {
				continue;
			} else {
				A[k].row = i;
				A[k].col = j;
				A[k].value = a[i][j];
				k++;
			}
		}
	}

	A[0].value = k-1;

	cout<<"   \tRow\tCol\tValue\n";
	cout<<"a[0]\t"<<A[0].row<<"\t"<<A[0].col<<"\t"<<A[0].value<<"\n";
	for (f=1; f<=A[0].value; f++)
	{
		cout<<"["<<f<<"]\t"<<A[f].row<<"\t"<<A[f].col<<"\t"<<A[f].value<<"\n";
	}
	cout<<endl;
}


void addMatrices(matrix A[100],matrix B[100]) {
	matrix C[100];

	if (A[0].row != B[0].row || A[0].col != B[0].col ) {
		cout << "Matrices cant be added!" << endl;
		return;
	}

	int i,j,k = 1,f;
	C[0].row = A[0].row;
	C[0].col = A[0].col;
	bool visited[101] = {false};
	for (i=1;i<A[0].value+1;i++){
		int result = A[i].value;
		for (j=1;j<B[0].value+1;j++) {
			if (B[j].row == A[i].row && B[j].col == A[i].col) result += B[j].value, visited[j] = true;
		}
		C[k].row = A[i].row;
		C[k].col = A[i].col;
		C[k].value = result;
		k++;
	}

	for (i=1;i<B[0].value+1;i++){
		if (visited[i])continue;
		C[k].row = B[i].row;
		C[k].col = B[i].col;
		C[k].value = B[i].value;
		k++;
	}

	C[0].value = k -1;

	cout<<"   \tRow\tCol\tValue\n";
	cout<<"a[0]\t"<<C[0].row<<"\t"<<C[0].col<<"\t"<<C[0].value<<"\n";
	for (f=1; f<=C[0].value; f++)
	{
		cout<<"["<<f<<"]\t"<<C[f].row<<"\t"<<C[f].col<<"\t"<<C[f].value<<"\n";
	}
	cout<<endl;
}




int main() {
	int a[20][20], b[20][20],m,n;
	matrix A[100],B[100];

	cout << "Enter no of rows : ";
	cin >> m;
	cout << "Enter no of columns : ";
	cin >> n;

	cout << "Matrix A : " << endl;
	initMatrix(a,A,m,n);

	cout << "Matrix B : " << endl;
	initMatrix(b,B,m,n);

	addMatrices (A,B);

}