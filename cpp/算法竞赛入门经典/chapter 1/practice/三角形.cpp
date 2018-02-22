#include<cstdio>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a > b){a = a + b;b = a - b;a = a - b;}
	if(a > c){a = a + c;c = a - c;a = a - c;}
	if(b > c){b = b + c;c = b - c;b = b - c;}
	if(c * c == a * a + b * b){printf("yes");}
	else{printf("no");}
	return 0;
}
