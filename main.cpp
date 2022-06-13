
#include <iostream>
#include "Counter.h"

using namespace std;

void g(const Counter& c) 
{
	// const 로 클래스를 참조하면 클래스에 함수의 형태 또한 const 여야 한다.(Couter.h 에 변해있음)
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