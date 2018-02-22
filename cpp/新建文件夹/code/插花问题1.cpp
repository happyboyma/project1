#include<iostream>
using namespace std;
int V = 5,F = 3;

void ToBinary(int num, int binary[V]) 
{
	for (int i = 1; i < V; i++)
	{
		binary[i] = num & 1;
		num = num >> 1; 
	}
}

int 
