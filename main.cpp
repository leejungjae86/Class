
#include <iostream>
#include "Counter.h"

using namespace std;

void g(const Counter& c) 
{
	// const �� Ŭ������ �����ϸ� Ŭ������ �Լ��� ���� ���� const ���� �Ѵ�.(Couter.h �� ��������)
	cout << " Counter = " << c.getCount() << endl;
}


int main()
{
	int a = 0;
	Counter c1;
	c1.counting();
	c1.counting();
	cout << "c1 Count = " << c1.getCount() << endl;
	c1.counting();
	g(c1);

	


}