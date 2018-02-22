#include <iostream>
using namespace std;

int Num; //方案数 
bool assigned[5]; // 书的分配情况 
int take[5]; // 书的分配
int like[5][5] = { {0,0,1,1,0},
					{1,1,0,0,1},
					{0,1,1,0,1},
					{0,0,0,1,0},
					{0,1,0,0,1}		};

void Try(int id)
{
	// 递归终止条件
	if( id == 5)
	{
		Num ++;
		// 方案数 + 1
		cout << "第" << Num << "种方案(按ABCDE排序)：" ;
		for (int i = 0; i < 5; i++)
		{
			cout << take[i] + 1 << ' ';
		}
		cout << endl;
		// 输出方案  
		return;
	} //__if__
	
	//开始分书 
	for(int book = 0; book < 5; book++)
	{
		//满足要求
		if((like[book][id] == 1)&&!assigned[book]) 
		{
			// 记录该选择
			take[book] = id;
			//更新条件限制
			assigned[book] = true; 
		 	// Try 下一行
			Try(id + 1);
			//恢复原有条件
			assigned[book] = false; 
		}
	}
} 

int main()
{
	int Num = 0;// 初始方案数 0
	for(int i = 0; i < 5; i++)
		assigned[i] = false;
	// 初始书的分配情况 
	Try(0);
	// 从id为0的人开始分配
	cout << "共有" << Num << "种情况" <<endl; 
	return 0; 
}
