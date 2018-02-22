#include <iostream>
using namespace std;

int Num;  //方案数
int take[5]; //5本书分配给谁

bool assigned[5];//5本书是否分配

int like[5][5] = {	{0,0,1,1,0},
					{1,1,0,0,1},
					{0,1,1,0,1},
					{0,0,0,1,0},
					{0,1,0,0,1}	};

void Try(int id)
{
	//递归终止条件：所有读者均已分配合适书籍
	if (id == 5)
	{
		//方案数加1
		Num++;

		// 输出方案细节
		cout << "第" << Num << "个方案（按ABCDE次序）:";
		for(int i = 0;i < 5;i++)
			cout << take[i] << ' ';
		cout << endl;

		return; 
	}
	
	// 逐一为每本书找到合适的读者
	for(int book = 0; book <= 4; book++)
	{
		// 是否满足分书条件
		if ((like[id][book] == 1) && !assigned[book])
		{
			//记录当前的分书情况
			take[id] = book;
			assigned[book] = true;
		
			//为下一名读者分配合适书籍
			Try(id + 1);
			
			//将书退还，尝试另一种方法
			assigned[book] = false; 
		} // __if__
	} // __for__ 
	 
}

int main()
{
	Num = 0; //分书方案初始值
	for (int book = 0; book < 5; book++)
		assigned[book] = false;
	//  从第零个人开始分书
	Try(0) ;

	return 0; 
}
 
