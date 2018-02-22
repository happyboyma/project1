#include <iostream>
using namespace std;

void MergeSort(int * array,int start,int end);

int main()
{
	int array[20]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	MergeSort(array,0,20);
	for(int i = 0;i < 20;i++)
		cout << array[i]<<" ";
	cout<<endl;
	return 0;
} 


void MergeSort(int * array,int start,int end)
{
	if(start == end - 1)
		return;
	//�ݹ���ֹ����
	int middle = (start + end)/2;
	MergeSort(array,start,middle);
	MergeSort(array,middle,end);
	//����������ֿ�����
	int * tmp = new int[end - start];
	int left_idx = start,right_idx = middle,idx = 0;
	while(left_idx < middle && right_idx < end)
	{
		if(array[left_idx] > array[right_idx] )
			tmp[idx++] = array[right_idx++];
		else
			tmp[idx++] = array[left_idx++];
	} 
	//����ȡ���������Ԫ�أ����кϲ�
	while(left_idx < middle)
		tmp[idx++] =  array[left_idx++];
	while(right_idx < end)
		tmp[idx++] = array[right_idx++];
	//�����������û��ȡ�꣬��ȫ��������ʱ�ռ� 
	for(int i = 0 , idx = start ; i < ( end - start );i++,idx++)
		array[idx] = tmp[i];
	//����ʱ�ռ临�Ʒ���������
	delete [] tmp;
	//�ͷſռ� 
}
