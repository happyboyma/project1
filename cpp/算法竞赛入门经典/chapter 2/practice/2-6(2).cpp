#include<cstdio>
#include<iostream>
using namespace std;

void sort(int * l,int n)
{
	for(int i = 0; i < n; i++)
	{
		int k = i;
		for(int j = i; j < n; j++)
		{
			if(l[j] < l[k])
				k = j;
		}
		int t;
		t = l[i];
		l[i] = l[k];
		l[k] = t;
	}
}

int main()
{
	int l[9];
	for(int i = 101; i < 333; i++)
	{
		int found = 0;
		for(int j = 0; j < 3; j++)
		{
			l[3*j] = (j + 1) * i / 100;
			l[3*j+1] = ((j + 1) * i)% 10;
			l[3*j+2] = ((j + 1) * i - 100 * l[3*j] - l[3*j+1]) / 10; 
		}
		sort(l,9);
		for(int j =0; j < 9; j++)
			if(l[j] == j+1)
				found ++;
		if(found == 9)
			printf("%d %d %d\n",i,2*i,3*i);
	}
	return 0;
}
