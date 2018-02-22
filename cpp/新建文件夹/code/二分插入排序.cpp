#include <iostream>
using namespace std;

int find(int * array,int n,int num);

int main()
{
	int array[20] = {19,20,18,17,12,13,14,16,15,11,10,9,8,7,6,5,4,3,2,1};
	for(int i =1;i < 20;i++)
	{
		int key,pos;
 		key = array[i];
		pos = find(array,i,array[i]);
		for(int j = i;j > pos;j--)
		{
			array[j] = array[j-1];
		}
		array[pos] = key;
	}
	for(int i = 0;i < 20;i++)
		cout << array[i] << " ";

	return 0;
}

int find(int * array,int n,int num)
{
	int mid,low,high;
	low = 0;
	high = n;
	mid = ( low + high ) / 2;
	while(low < high-1)
	{
		if(array[mid] > num)
			high = mid;
		if(array[mid] < num) 
			low = mid;
		mid = ( low + high ) / 2;
	}
	if(array[mid] > num)
		return low;
	if(array[mid] < num)
		return low + 1;
	
}
