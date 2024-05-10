#include <iostream>
using namespace std;

namespace A
{
	int data = 10;

	void Function()
	{
		std::cout << "A�� ���" << std::endl;
	}
}

namespace B
{
	int data = 20;

	void Function()
	{
		std::cout << "B�� ���" << std::endl;
	}
}

class Unit
{
#pragma region ���� ������
	// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������
	// �����ϴ� �������Դϴ�.

	// public    : Ŭ���� �ܺο��� �����͸� ������ �� �ֵ���
	//			   ����ϴ� ���� �������Դϴ�.

	// protected : Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ����������
	//		       ������ ����ϴ� ���� �������Դϴ�.

	// private   : Ŭ���� ���ο����� ������ ����ϴ� ���� �������Դϴ�.

#pragma endregion


private:
	int health = 100;
	double defense = 5.5f;

public:
	void Move()
	{
		cout << "Unit Move" << endl;
	}

	void information()
	{
		cout << "Heatlh : " << health << endl;
		cout << "Defense : " << defense << endl;
	}
};

int main()
{
#pragma region �̸� ���� (Name Space)
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������
	// �����ϴ� �����Դϴ�.

	// cout << "A namespace�� �ִ� data �� : " << A::data << endl;
	// cout << "B namespace�� �ִ� data �� : " << B::data << endl;

	// �̸� ������ ���� �̸��� �Լ��� ������ �� �ٸ�
	// ������ �����Ͽ� �ߺ����� �ʵ��� ������ �� �ֽ��ϴ�.
#pragma endregion

#pragma region ���� ��� �ݺ���

	// int list[5] = { 10, 20, 30, 40, 50 };
	// 
	// for (int element : list)
	// {
	// 	cout << element << endl;
	// }
#pragma endregion

#pragma region Ŭ���� (Class)
	// ����� ���� ������ �������� �Ӽ��� �Լ���
	// ���ԵǾ� ������, Ŭ������ ���� ��ü�� �����Ͽ�
	// �����ϰ� ����� �� �ִ� ����ü�Դϴ�.

	// Unit unit;
	// 
	// cout << "Unit Ŭ������ ũ�� : " << sizeof(Unit) << endl;
	// 
	// unit.Move();
	// 
	// unit.information();

	int x = 10;

	int* ptr = &x;

	// Ŭ������ ��� Ŭ���� ���ο� �ִ� ������ Ŭ������
	// �޸� ������ ���Ե�����, ���� ������ �Լ���
	// �޸𸮴� Ŭ���� ������ ���Ե��� �ʽ��ϴ�.
#pragma endregion


	return 0;
}

