#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int (*p)[10] = &a;
    for (int i=0;i<10;i++)
    {
        a[i] = i*2;
    }

    cout<<**(p+1)<<endl;
    // https://blog.csdn.net/Strengthennn/article/details/119702982
}