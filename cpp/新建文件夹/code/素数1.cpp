#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
	for(int i = 1;i <= 100;i++)
	{
		if(isPrime(i))
			cout << i << endl;
	}
	return 0;
} 

bool isPrime(int n)
{
	bool bPrime = true;
	for(int i = 2;i * i <= n;i++)
	{
		if(n % i ==0)
		{
			bPrime = false;
			break;
		}
	}
	return bPrime;
}
