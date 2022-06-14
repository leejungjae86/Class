
#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(const char* name, const char* addr)
{
	// this : �����ϰ� �ִ� ��ü�� ����Ų��
	this ->name = new char[strlen(name) + 1];
	//strcpy_s (������ ���, ���ڿ��� ����, ������ ���)
	//strlen(name)�� +1�� ���� ������ ���ڿ��� �������� �׻� "\n" ��
	//"\n"�� ���ڿ��� �������̶�� ǥ��d
	strcpy_s(this->name, strlen(name) + 1, name);
	
	this->addr = new char[strlen(addr) + 1];
	strcpy_s(this->addr, strlen(addr) + 1, addr);

	cout << " Person ��ü ���� (" << name << ")" << endl;


}

Person::~Person()
{
	cout << " Person ��ü ���� (" << name << ")" << endl;

	delete[] name;
	delete[] addr;

	name = nullptr;
	addr = nullptr;
	

}

void Person::printName()
{
	cout << "���� �ٲ� �̸� : "<< name << endl;
}

void Person::printAddr()
{
	cout << " �ٲ� �ּ� :"<< addr << endl;
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
