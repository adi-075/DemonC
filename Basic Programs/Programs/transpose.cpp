#include <iostream>
using namespace std;

int main()
{	 
	int a[10][10],row,col,i,j;
	cout << "Enter the number of rows and columns for the matrix: ";
	for (row = 0; row < 1; row++)
    	for (col = 0; col < 1; col++)
    		cin >> a[row][col];
	cout << "Enter Elements of Matrix:\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin >> a[i][j];
		}
	}
	
	cout << "Matrix is:\n";
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout << a[i][j];
		}
		cout << "\n";
	}
	cout << "\nTranspose of Matrix:\n";
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout << a[j][i];
		}
		cout << "\n";
	}
	
}
