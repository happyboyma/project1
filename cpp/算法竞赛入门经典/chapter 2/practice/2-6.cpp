#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	int num[9],l[9];
	for(int i = 101; i < 333; i++)
	{
		int found = 0;
		for(int j = 0; j < 9; j ++)
			num[j] = 0;
		for(int j = 0; j < 3; j++)
		{
			l[3*j] = (j + 1) * i / 100;
			l[3*j+1] = ((j + 1) * i)% 10;
			l[3*j+2] = ((j + 1) * i - 100 * l[3*j] - l[3*j+1]) / 10; 
		}
		for(int j = 0;j < 9; j++)
		{
			if((l[j]  - 1) >= 0)
				num[l[j] - 1]++;
		}
		for(int j = 0;j < 9; j++)
		{
			if(num[j] == 1)
				found++;
		}
		if(found == 9)
		{
			printf("%d %d %d\n",i,2*i,3*i);
		}
	}
	return 0;
}
