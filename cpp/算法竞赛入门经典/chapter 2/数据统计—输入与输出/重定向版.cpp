#define LOCAL
#include<cstdio>
#define INF 1000000000
using namespace std;

int main()
{
#ifdef LOCAL
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
#endif
	int x, n = 0, min = INF, max = -INF, s = 0;
	while(scanf("%d",&x) == 1)
	{
		s += x;
		if(x > max){max = x;}
		if(x < min){min = x;}
	/*
		printf("x = %d,max = %d,min = %d",x,max,min);
	*/
		n++;
	}
	printf("%d %d %.3f\n",min,max,(double)s/n); 
	return 0;
} 
