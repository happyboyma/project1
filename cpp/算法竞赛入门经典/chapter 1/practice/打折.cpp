#include<cstdio>
using namespace std;

int main()
{
	const int cloth = 95;
	int n;
	scanf("%d",&n);
	int cost = n * cloth;
	if ( cost > 300 )
		printf("%.2f",cost * .85);
	else
		printf("%.2f",float(cost));
	return 0;
} 
