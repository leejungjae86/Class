
#pragma once

class Person
{ // �⺻������ �����̺����� ������
	char* name;
	char* addr;     //�ּҰ�

public:
	Person(const char* name, const char* addr);
	~Person();

	void printName();
	void printAddr();
	void changeAddr(const char* newAddr);
	void changeName(const char* newName);

};

