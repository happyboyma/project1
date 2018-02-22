#include <iostream>
using namespace std;

int main()
{
	int r3 = 0 , r5 = 0 , r7 = 0,seive[201];
	cin >> r3 >> r5 >> r7;
	cout << r3 << r5 << r7 << endl;
	for (int i = 0;i <= 200 ;i++)
		seive[i] = 0;
	for(int i = r3;i <= 200;i += 3)
		seive[i]++;
    cout << r3 << r5 << r7 << endl;
	for(int i = r5;i <= 200;i += 5)
		seive[i]++;
    cout << r3 << r5 << r7 << endl;
	for(int i = r7;i <= 200;i += 7)
        seive[i]++;
    cout << r3 << r5 << r7 << endl;
	for(int i = 1;i < 200;i++)
		if(seive[i] == 3)
		{
			cout << i << endl;
			break;
		}
	return 0;
}
