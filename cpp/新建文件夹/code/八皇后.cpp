#include <iostream>
using namespace std;

const int Normalized = 9; // ͳһ�����±꣨��ֹ���ָ����� 
int Num; // ������
int pos[9]; // �ⷨ 
bool s[9]; //  ��ռ�����
bool l[17]; // ��Խ���ռ�����
bool r[17]; // �ҶԽ���ռ����� 

void Try(int col)
{
	// �ݹ���ֹ����
	if( col == 9)
	{
		Num++; // ������ + 1
		cout << "��" << Num << "�ַ���:";
		for(int col = 1; col < 9; col++)
			cout << pos[col] << ' ';
		cout << endl; // ������� 
	 
	return;
	}//__if__

	//���г���
	for(int row = 1; row < 9; row++) 
	{
		// �ж������Ƿ�����Ҫ��
		if(s[row] && l[col - row + Normalized] && r[col + row])
		{
			// ��¼��ѡ��
			pos[col] = row;
			// ������������ 
			s[row] = false;
			l[col - row + Normalized] = false;
			r[col + row] = false;
			// Try(��һ��)
			Try(col + 1);
			// �ָ�ԭ����������
			s[row] = true;
			l[col - row + Normalized] = true;
			r[col + row] = true; 
		}//__if__
	}//__for__ 
 } 

int main()
{
	int Num = 0;// ��ʼ��������
	for(int i = 0; i < 9; i++)
		s[i] = true;
	for(int i = 0; i < 17; i++)
	{
		l[i] = true;
		r[i] = true;
	} // ��ʼ������
	Try(1);//�ӵ�һ�п�ʼ���� 
	return 0; 
}
