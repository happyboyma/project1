#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	float a = n * 3.1415926 / 180;
	printf("%.3f %.3f",sin(a),cos(a));
	return 0;
} 
