#include <iostream>

char character = 'A';

void Recovery(int& health)
{
	health = 100;
}

int main()
{
#pragma region ��Ʈ�� (Stream)
	// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧�Դϴ�.

	// ���� ������ (<<)
	// ��Ʈ���� ��� �Էµ� �����ʹ� ��� ��ġ�� �����ϸ�,
	// "<<" �����ڸ� ����Ͽ� �ڽ��� ������ ���� ��ȯ�մϴ�.

	// std::cout << "C++ Language" << std::endl;
	// std::cout << "C# Language" << std::endl;

	// ��Ʈ���� �ü���� ���� �����Ǹ�, ��Ʈ�� ��ü�� ���۶��
	// �ӽ� �޸� ������ �����մϴ�.

	// ���� ������ (>>)
	// ��Ʈ������ �Է¹��� �� ">>" �����ڸ� ����Ͽ� ���ۿ� ������ ����
	// NULL ���ڱ����� ���� ���� ������ ����մϴ�.

	// int data = 0;
	// 
	// std::cin >> data;
	// 
	// std::cout << "data�� �� : " << data;

	// int* ptr = new int;
	// int* dynamicArray = new int[5];
	// 
	// dynamicArray[4] = 99;
	// *ptr = 100;
	// 
	// std::cout << "dynamicArray[4]�� �� : " << dynamicArray[4] << std::endl;
	// std::cout << "ptr�� ����Ű�� �� : " << *ptr << std::endl;
	// 
	// delete ptr;
	// delete[] dynamicArray;
#pragma endregion

#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� 
	// �������Դϴ�.

	// char chracter = 'W';
	// 
	// std::cout << "character ������ �� : " << character << std::endl;
	// std::cout << "character ���� ������ �� : " << character << std::endl;

	// ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������
	// ����Ǿ��� �� ����� ������ ����� ������ �̸��� ����ϴ�
	// ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʽ��ϴ�.
#pragma endregion

#pragma region ������

	// int health = 100;
	// 
	// int & reference = health;
	// 
	// reference -= 50;;
	// 
	// Recovery(health);
	// 
	// std::cout << "health�� �� : " << health << std::endl;

#pragma endregion



	return 0;
}

