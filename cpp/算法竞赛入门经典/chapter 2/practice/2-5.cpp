#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c;
	while(scanf("%d%d%d", &a, &b, &c) != EOF&& a < 1e6 && b < 1e6 && c < 100 && !(a == 0 || b == 0 || c == 0))
	{
		int r = 0,p = 0;
		printf("%d.",a/b);
		for(int i = 0; i < c + 1; i++)
		{
			r = ( a * 10 / b ) % 10;
			a *= 10;
			p *= 10;
			p += r; 
		}
		if(p % 10 > 5)
			p += 10;
		p /= 10;
		printf("%d\n",p);
	}
	return 0;
}
