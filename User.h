
#pragma once
#include "Counter.h"

class User
{
public:
	void killMonster()
	{
		m_Counter.counting();
	}

	Counter m_Counter;

};