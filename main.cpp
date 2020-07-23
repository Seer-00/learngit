/*
	For 循环输出 MIN ~ MAX 的值
	修改 MIN 和 MAX 的宏定义，即可改变输出
*/

/*
	新增：输出带序号功能
	2020-07-23
*/

#include <iostream>
#define min 80 
#define max 120 

using namespace std;

int main()
{
	int i;
	for (i = min; i < max; i++) {
		// 输出数据前带有从1开始递增的序号
		cout << (i - min + 1) << ":" << i << endl;
	}

	system("pause");
	return 0;
}
