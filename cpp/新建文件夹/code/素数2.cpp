#include <iostream>
using namespace std;

int main()
{
	bool seive[101];
	for(int i = 2;i <= 100;i++)
		seive[i] = true;
	for(int d = 2;d * d <= 100;d++)
		if(seive[d])
		{
		 	for(int j=d*d;j <= 100;j+=d)
			{
				seive[j] = false;
			}
		}
	for(int m = 2;m <= 100;m++)
	{
		if(seive[m])
			cout << m << endl;
	}

	return 0;
}
