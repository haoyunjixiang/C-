#include <iostream>
using namespace std;

void leftuse()
{
    int a = 10;
	int &b = a; // 定义一个左值引用变量
	b = 20; // 通过左值引用修改引用内存的值
	cout<<a<<endl;
}

int main()
{
    int &a = 10;
    leftuse();
    // https://blog.csdn.net/Strengthennn/article/details/119702982
}