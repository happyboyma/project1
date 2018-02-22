#include<iostream>
using namespace std;
const int M = 7;
const int N = 7;


void FillMatrix(int matrix[M][N],int number,int size,int offset)
{
	if(size == 0)
		return;
	if(size == 1)
	{
		matrix[offset][offset] = number;
		return;
	}
	for(int i = 0; i < size - 1; i++ )
	{
		matrix[offset + i][offset] = i + number;
		matrix[offset + size - 1][offset + i] = i + size - 1 + number;
		matrix[offset + size - 1 - i][offset + size - 1] = 2 * size - 2 + i +number;
		matrix[offset][offset + size - 1 -i] = number + 3 * size - 3 + i;
	}
	FillMatrix(matrix,number + 4 * size - 4,size - 2,offset + 1); 
}

void PrintMatrix(int matrix[M][N],int size)
{
	for(int j = 0; j < size; j++)
	{
		for(int i = 0; i < size; i++)
			cout << matrix[j][i] << " ";
		cout << "" << endl<<endl;
	} 
}

int main()
{	
	int matrix[M][N];
	int number = 1,size = 5,offset = 0;
	FillMatrix(matrix,number,size,offset);
	PrintMatrix(matrix,size);
	return 0;
}

