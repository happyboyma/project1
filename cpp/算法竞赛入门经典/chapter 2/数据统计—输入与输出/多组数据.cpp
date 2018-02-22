#include<cstdio>
#define INF 1000000000
using namespace std;

int main()
{
	int n = 0, s = 0, x = 0,flag = 0;
	while(scanf("%d",&n) == 1 && n)
	{
		int min = INF,max = -INF,s = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d",&x);
			s += x;
			if(x > max) max = x;
			if(x < min) min = x;
		}
		if(flag) printf("\n");
	printf("Case %d: %d %d %f\n",++flag,min,max,(double)s/n);
	} 
	return 0;
}
