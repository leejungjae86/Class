
#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(const char* name, const char* addr)
{
	// this : 구현하고 있는 객체를 가르킨다
	this ->name = new char[strlen(name) + 1];
	//strcpy_s (저장할 대상, 문자열의 길이, 복사할 대상)
	//strlen(name)에 +1을 해준 이유는 문자열에 마지막에 항상 "\n" 들어감
	//"\n"은 문자열의 마지막이라는 표기d
	strcpy_s(this->name, strlen(name) + 1, name);
	
	this->addr = new char[strlen(addr) + 1];
	strcpy_s(this->addr, strlen(addr) + 1, addr);

	cout << " Person 객체 생성 (" << name << ")" << endl;


}

Person::~Person()
{
	cout << " Person 객체 제거 (" << name << ")" << endl;

	delete[] name;
	delete[] addr;

	name = nullptr;
	addr = nullptr;
	

}

void Person::printName()
{
	cout << "에서 바꾼 이름 : "<< name << endl;
}

void Person::printAddr()
{
	cout << " 바뀐 주소 :"<< addr << endl;
}


void Person::changeAddr(const char* newAddr)
{
	delete[] addr;

	addr = new char[strlen(newAddr) + 1];
	strcpy_s(addr, strlen(newAddr) + 1, newAddr);
}

void Person::changeName(const char* newName)
{
	delete[] name;

	name = new char[strlen(newName) + 1];
	strcpy_s(name, strlen(newName) + 1, newName);
}
