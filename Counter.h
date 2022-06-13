
#pragma once  // 한번만 컴파일 하도록 해준다 (암튼편한거)

/*
캡슐화
객체의 내부 구현부와 외부 사용자 부분을 분리하여
내부는 은닉하여 가릴수 있고 사용자 부분만 노출해서 사용에 편리하도록 함
*/
/*
클래스 이름 : Counter
- 숫자를 1씩 증가시킬 수 있다. (입력 :값(?) 없다 , 출력 (?):없다 )
- 0으로 초기화를 할수 있다. (입력 :값(?) 없다 , 출력 (?)없다 )
- 현재 카운팅한 값을 알려준다. (입력 값(?): 없다 , 출력 (?): count  )
*/

class Counter
{
// public:  //모든 곳에서 접근가능
	int count;  // 카운팅하는 값을 저장 count

public:
	Counter() : count{0}  // 소가로() 가능 하지만 {}를 사용하면 명확한 값을 사용해야 되기때문에 안전
	{
		count = 0;
	}

public:
	void counting()  // 숫자를 1씩 증가 시킴
	{
		count++;
	}

	void reset()     // count 가 0 으로 초기화 된다.
	{
		count = 0;
	}

	int getCount() const   // count 값을 알려준다
	{
		return count;
	}
private:  // 접근 불가능
protected: //상속 관계 접근가능

};