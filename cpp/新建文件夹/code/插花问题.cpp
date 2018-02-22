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

void ToBinary(int num,int binary[V])
{
	for(int i = 0; i < V; i++)
	{
		binary[i] = num & 1;
		num = num >> 1;
	}
}
//转化为二进制
 
int CountBinary(int binary[V],int &high)
{
	int count = 0;
	high = -1;
	for(int i = 0; i < V; i++)
	{
		if(binary[i] == 1)
		{
			high = i;
			count ++;
		}
	}
	return count;
}
//数二进制中一的个数 

void PrintBeauty(int best_beauty,int best_put)
{
	int best_binary[V] = {0};
	cout << "最大美感得分数： " << best_beauty << endl;
	ToBinary(best_put,best_binary);
	cout << "插花方法： 第" ;
	for(int i = 0; i < V;i++)
	{
		int j = best_binary[i] * (i + 1);
		if(j != 0)
			cout << j <<' ';
	}
	cout << "个花瓶插花 " << endl; 
}

int main()
{
	int partial_beauty[1<<V] = {0};
	partial_beauty[0] = 0;
	for(int put = 1; put < (pow(2,V)); put++)
	{
		int binary[V] = {0};
		ToBinary(put,binary);
		int high;
		int j = CountBinary(binary,high);
		if(j > F)
			continue;
		partial_beauty[put] = partial_beauty[put - (1 << high)] + beauty[high][j - 1];
		if(j == F && partial_beauty[put] > best_beauty)
		{
			best_beauty = partial_beauty[put];
			best_put = put;
		}
	}
	PrintBeauty(best_beauty,best_put);
	return 0;
}
