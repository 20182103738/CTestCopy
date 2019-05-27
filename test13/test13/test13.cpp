// test13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h".
#include "iostream"
using namespace std;
class CTestCopy
{
private:
	int *x;
public:
	CTestCopy();
	~CTestCopy();
	CTestCopy(int a);
	CTestCopy(CTestCopy & om);
	void setX();
	void display();
};
CTestCopy::CTestCopy()
{
	x = new int;
	cout << "默认构造函数x = " << *x << "  x = " << &x << "  x = " << x << endl;
}
CTestCopy::~CTestCopy()
{
	cout << "析构函数x = " << *x << "  x = " << &x << "  x = " << x << endl;
	delete x;
}
CTestCopy::CTestCopy(int a)
{
	x = new int;;
	*x = a;
	cout << "x = " << *x << "  x = " << &x << "  x = " << x << endl;
}
CTestCopy::CTestCopy(CTestCopy & om)
{
	*x = *om.x;
	x = om.x;
	cout << "复制构造函数x = " << *x << "  x = " << &x << "  x = " << x << endl;
}
void CTestCopy::display()
{
	cout << "display类型x = " << *x << "  x = " << &x << "  x = " << x << endl;
}
int testtemp(int x)
{
	return x * 2;
}
int main()
{
	CTestCopy od(20);
	od.display();
	CTestCopy obj(od);
    return 0;
}

