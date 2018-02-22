#include <iostream>
using namespace std;

void QuickSort(int * array,int len);

int main()
{
	int numbers[20] = {19,20,18,17,12,13,14,16,15,11,10,9,8,7,6,5,4,3,2,1};
	QuickSort(numbers,20);
	for(int i = 0;i < 20;i++)
		cout << numbers[i] << " ";
	return 0;
}

void QuickSort(int * array,int len)
{
	if (len <= 1)
		return;
	//递归终止条件
	int * left_array = new int[len];
	int * right_array = new int[len];
	int	left_idx = 0,right_idx = 0;
	int key = array[0];
	for(int i = 1 ; i < len ; i++)
	{
		if(array[i] < array[0])
			left_array[left_idx++] = array[i];
		if(array[i] > array [0])
			right_array[right_idx++] = array[i];
	}
	//用第一个元素分成两个子数组 
	QuickSort(left_array,left_idx);
	QuickSort(right_array,right_idx);
	//对前后数组排序
	for(int i = 0;i < left_idx;i++)
		array[i] = left_array[i];
	array[left_idx] = key;
	for(int i = 0,idx = left_idx + 1;i < right_idx;i++,idx++)
		array[idx] = right_array[i];	
	//前后数组连接并返回数组中
	delete [] left_array;
	delete [] right_array;
	//释放临时空间 
}
