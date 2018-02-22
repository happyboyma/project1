#include<cstdio>
using namespace std;

int main()
{
	int r3,r5,r7,num[101],kase = 0;
	while(scanf("%d%d%d", &r3, &r5, &r7) != EOF)
	{
		int found = 0,n = 0;
		for(int i = 0; i < 101; i++)
			num[i] = 0;
		for(int i = r3; i < 101; i += 3)
			num[i]++;
		for(int i = r5; i < 101; i += 5)
			num[i]++;
		for(int i = r7; i< 101; i += 7)
			num[i]++;
		for(int i = 0;i < 101; i++)
			if(num[i] == 3)
			{
				n = i;
				found = 1;
			}
		if(found == 1) 
			printf("Case %d: %d\n",++kase,n);
		else
			printf("Case %d: No answer\n",++kase);		
	} 
	return 0;
}
