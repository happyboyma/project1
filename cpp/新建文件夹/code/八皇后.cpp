#include <iostream>
using namespace std;

const int Normalized = 9; // 统一数组下标（防止出现负数） 
int Num; // 方案数
int pos[9]; // 解法 
bool s[9]; //  行占用情况
bool l[17]; // 左对角线占用情况
bool r[17]; // 右对角线占用情况 

void Try(int col)
{
	// 递归终止条件
	if( col == 9)
	{
		Num++; // 方案数 + 1
		cout << "第" << Num << "种方案:";
		for(int col = 1; col < 9; col++)
			cout << pos[col] << ' ';
		cout << endl; // 输出方案 
	 
	return;
	}//__if__

	//按行尝试
	for(int row = 1; row < 9; row++) 
	{
		// 判断棋子是否满足要求
		if(s[row] && l[col - row + Normalized] && r[col + row])
		{
			// 记录该选择
			pos[col] = row;
			// 更新条件限制 
			s[row] = false;
			l[col - row + Normalized] = false;
			r[col + row] = false;
			// Try(下一行)
			Try(col + 1);
			// 恢复原有条件限制
			s[row] = true;
			l[col - row + Normalized] = true;
			r[col + row] = true; 
		}//__if__
	}//__for__ 
 } 

int main()
{
	int Num = 0;// 初始化方案数
	for(int i = 0; i < 9; i++)
		s[i] = true;
	for(int i = 0; i < 17; i++)
	{
		l[i] = true;
		r[i] = true;
	} // 初始化条件
	Try(1);//从第一行开始尝试 
	return 0; 
}
