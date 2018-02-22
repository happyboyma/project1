#include<iostream>
#include<cmath>
using namespace std;

const int V = 5;
const int F = 3;
int beauty[V][F] = { {7,5,-21},
					{23,21,5},
					{-5,-4,-4},
					{-24,10,-20},
					{16,23,20}	};
int best_beauty = 0,best_put = 0;


void FindPut(int partial[V + 1][F + 1],int binary[V],int i,int j,int &k)
{
	if(j == 0)
		return;
	if(partial[i][j] != partial[i - 1][j])
	{
		binary[k] = i; 
		k++; 
		FindPut(partial,binary,i - 1,j - 1,k);
	}
	else
		FindPut(partial,binary,i - 1,j,k);
}

void PrintBeauty(int best_beauty,int binary[V],int k)
{
	int best_binary[V] = {0};
	cout << "最大美感得分数： " << best_beauty << endl;
	cout << "插花方法： 第 " ;
	for(int i = 0; i < k;i ++)
	{
		cout << binary[k - 1 - i] <<' ';
	}
	cout << "个花瓶插花 " << endl; 
}

int main()
{
	int partial[V + 1][F + 1] = {{0}};
	for(int i = 0; i < V; i++)
		partial[i][0] = 0;
	for(int i = 1; i < F + 1;i++)
		for(int j = 1; j < V + 1; j++)
		{
			partial[j][i] = max(partial[j-1][i],partial[j-1][i-1]+beauty[j-1][i-1]);
		}
	best_beauty = partial[V][F];
	int binary[V] = {0};
	int k = 0;
	FindPut(partial,binary,V,F,k);
	PrintBeauty(best_beauty,binary,k);
	return 0;
}  
