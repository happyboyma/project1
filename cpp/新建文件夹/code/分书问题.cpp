#include <iostream>
using namespace std;

int Num;  //������
int take[5]; //5��������˭

bool assigned[5];//5�����Ƿ����

int like[5][5] = {	{0,0,1,1,0},
					{1,1,0,0,1},
					{0,1,1,0,1},
					{0,0,0,1,0},
					{0,1,0,0,1}	};

void Try(int id)
{
	//�ݹ���ֹ���������ж��߾��ѷ�������鼮
	if (id == 5)
	{
		//��������1
		Num++;

		// �������ϸ��
		cout << "��" << Num << "����������ABCDE����:";
		for(int i = 0;i < 5;i++)
			cout << take[i] << ' ';
		cout << endl;

		return; 
	}
	
	// ��һΪÿ�����ҵ����ʵĶ���
	for(int book = 0; book <= 4; book++)
	{
		// �Ƿ������������
		if ((like[id][book] == 1) && !assigned[book])
		{
			//��¼��ǰ�ķ������
			take[id] = book;
			assigned[book] = true;
		
			//Ϊ��һ�����߷�������鼮
			Try(id + 1);
			
			//�����˻���������һ�ַ���
			assigned[book] = false; 
		} // __if__
	} // __for__ 
	 
}

int main()
{
	Num = 0; //���鷽����ʼֵ
	for (int book = 0; book < 5; book++)
		assigned[book] = false;
	//  �ӵ�����˿�ʼ����
	Try(0) ;

	return 0; 
}
 
