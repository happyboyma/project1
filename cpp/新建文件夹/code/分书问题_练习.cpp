#include <iostream>
using namespace std;

int Num; //������ 
bool assigned[5]; // ��ķ������ 
int take[5]; // ��ķ���
int like[5][5] = { {0,0,1,1,0},
					{1,1,0,0,1},
					{0,1,1,0,1},
					{0,0,0,1,0},
					{0,1,0,0,1}		};

void Try(int id)
{
	// �ݹ���ֹ����
	if( id == 5)
	{
		Num ++;
		// ������ + 1
		cout << "��" << Num << "�ַ���(��ABCDE����)��" ;
		for (int i = 0; i < 5; i++)
		{
			cout << take[i] + 1 << ' ';
		}
		cout << endl;
		// �������  
		return;
	} //__if__
	
	//��ʼ���� 
	for(int book = 0; book < 5; book++)
	{
		//����Ҫ��
		if((like[book][id] == 1)&&!assigned[book]) 
		{
			// ��¼��ѡ��
			take[book] = id;
			//������������
			assigned[book] = true; 
		 	// Try ��һ��
			Try(id + 1);
			//�ָ�ԭ������
			assigned[book] = false; 
		}
	}
} 

int main()
{
	int Num = 0;// ��ʼ������ 0
	for(int i = 0; i < 5; i++)
		assigned[i] = false;
	// ��ʼ��ķ������ 
	Try(0);
	// ��idΪ0���˿�ʼ����
	cout << "����" << Num << "�����" <<endl; 
	return 0; 
}
