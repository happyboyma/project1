#include <cstdio>
#include<iostream> 
using namespace std;

int main()
{
	bool a,b,c;
	cin >> a >> b >> c;
	cout << fixed << boolalpha << a << "&&" << b << "||" << c <<endl;
	if(a&&b||c)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}
