#include <iostream>

using namespace std;

class Mechanic
{
protected:
	int health;
	int attack;
	int defense;

public :
	virtual void Move()
	{
		cout << "Mechanic" << endl;
	}
};

class Unit
{
protected:
	int health;
	int attack;
	int defense;

public :
	virtual void Move()
	{
		cout << "Unit Move" << endl;
	}

};
class Marine : public Unit
{
public:
	void Move()
	{
		cout << "Marine Move" << endl;
	}
};

class Firebet : public Unit
{
public:
	void Move()
	{
		cout << "Firebet Move" << endl;
	}
};

class SigueTank : public Mechanic
{
public:
	SigueTank()
	{
		health = 150;
		attack = 30;
		defense = 1;
	}

	void Move()
	{
		cout << "SiegueTank Move" << endl;
	}
};


int main()
{

#pragma region 다형성

#pragma region 함수의 오버로딩

#pragma endregion

#pragma region 함수의 오버라이딩

	// Unit unit;
	// unit.Move();
	// 
	// Marine marine;
	// marine.Move();

	// Unit* createPtr = new Marine;
	// 
	// createPtr->Move();

#pragma endregion

#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로 재정의
	// 될 수 있는 함수입니다.

	Mechanic* mechanicPtr = new SigueTank;

	mechanicPtr->Move();

	// 가상 함수 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있으며,
	// 접근 지정자는 공개로 설정해야 합니다.

#pragma endregion

	// 다형성은 커파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고, 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.

#pragma endregion

	return 0;
}

