#include <iostream>
using namespace std;

int main(){
for(int good_man = 0; good_man <= 3; good_man++)
{
	int count = 0;
	if(good_man != 0)
		count++; 
	if(good_man == 1)
		count++; 
	if(good_man == 2)
		count++; 
	if(good_man != 3)
		count++; 
	if(count == 3)
	{
		cout << good_man << endl;
		break;
	}
}
return 0;
} 
