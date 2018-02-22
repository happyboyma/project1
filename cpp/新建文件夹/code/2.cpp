#include <iostream>
using namespace std;
 int main()
{	
	int n = 1;
	float f = 1.1;
	double d = 1.2;
	char c = '*';
	cout << "The address of n is " << &n << endl;
	cout << "The address of f is " << &f << endl;
	cout << "The address of d is " << &d << endl;
	cout << "The address of c is " << &c << endl;
	int* pn = &n;
	float* pf = &f;
	double* pd = &d;
	char* pc = &c;
	cout << "pn:" << *pn << endl;
	cout << "pf:" << *pf << endl;
	cout << "pd:" << *pd << endl;
	cout << "pc:" << *pc << endl;
		

	return 0;
}
