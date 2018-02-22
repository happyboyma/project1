#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	float d = ( a + b + c ) / 3;
	cout << fixed << setprecision(3) << d << endl;
	return 0; 
}
