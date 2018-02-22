#include<cstdio>
using namespace std;

int main()
{
	for(int i = 100; i < 1000; i++)
	{
		int a = i / 100, b = i % 10, c = i/10 - a * 10;
		if(i == a*a*a + b*b*b + c*c*c) printf("%d\n",i); 
	} 
	return 0;
}
