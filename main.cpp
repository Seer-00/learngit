/*
	For 循环输出 MIN ~ MAX 的值
	修改 MIN 和 MAX 的宏定义，即可改变输出
*/

#include <iostream>
#define min 80 
#define max 120 

using namespace std;

int main()
{
	int i;
	for (i = min; i < max; i++) {
		cout << i << endl;
		// printf("%d\n", i);
	}

	system("pause");
	return 0;
}
