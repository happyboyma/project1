#include<iostream>
using namespace std;

void simplify(int martrix[4][3],int m,int n)
{
	for (int offset = 0; offset < m  || offset < n;offset++)
		for(int i = 1 + offset; i < m; i++)
			for(int j = 1 + offset; j < n; j++)
				{
					martrix[i][j] = martrix[offset][offset] * martrix[i][j]
										- martrix[i][offset] * martrix[offset][j];
				}
			martrix[i][offset] = 0;		
}


int main() 
{
	int count = 0;
	int result[100];
	cin >> num;
	while(count < num)
		int martrix[4][3];
		for(int i = 0; i < 4; i++)
			for(int j = 0; j < 3; j++)
				cin << martrix[i][j];
		for(int i =0; i < 3;i++)
			for(int j =0; j < 3; j++)
				martrix[i][j] = martrix[i][j] - martrix[3][j];
		simplify(martrix,3,3);
		if()
				
				
	return 0;
}
