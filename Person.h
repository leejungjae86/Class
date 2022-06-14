
#pragma once

class Person
{ // 기본적으로 프라이빗으로 지정됨
	char* name;
	char* addr;     //주소값

public:
	Person(const char* name, const char* addr);
	~Person();

	void printName();
	void printAddr();
	void changeAddr(const char* newAddr);
	void changeName(const char* newName);

};

