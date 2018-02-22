#include<cstdio>
using namespace std;

int main()
{
	int kase = 0;
	long long m;
	long long n;
	while(scanf("%lld%lld",&n,&m) != EOF && !(n == 0 || m == 0))
	{
		double sum = 0.0;
		for(long long int i = n; i < m + 1; i ++)
		{
			sum +=  1 / (double)(i * i);
		}
		printf("Case %d: %.5f\n", ++kase, sum);
	}
	return 0;
}
