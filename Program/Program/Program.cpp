#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <conio.h>  // _getch()를 사용하기 위해 필요

using namespace std;

// 화살표 초기화 함수
void initializeArrows(vector<int>& arrows, int size)
{
    const int arrowDirections[4] = { 0, 1, 2, 3 };
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < size; ++i)
    {
        arrows.push_back(arrowDirections[rand() % 4]);
    }
}

// 화살표 표시 함수
void displayArrows(const vector<int>& arrows)
{
    for (int arrow : arrows)
    {
        switch (arrow)
        {
        case 0: cout << "[↑]"; break;
        case 1: cout << "[←]"; break;
        case 2: cout << "[→]"; break;
        case 3: cout << "[↓]"; break;
        default: break;
        }
    }
    cout << endl;
}

// 사용자 입력 받기 함수
int getUserInput()
{
    int input = _getch();
    if (input == 224)
    {
        input = _getch();
        switch (input)
        {
        case 72: return 0; // 위 화살표
        case 75: return 1; // 왼쪽 화살표
        case 77: return 2; // 오른쪽 화살표
        case 80: return 3; // 아래 화살표
        default: return -1;
        }
    }
    return -1;
}


int main()
{

#pragma region 기본 템플릿 라이브러리

#pragma region 선형 컨테이너
    // 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 
    // 일반적인 컨테이너입니다.

    //std::vector<int> vector;

    //vector.reserve(6);

    //cout << "vector의 capacity 값 : " << vector.capacity() << endl;

    //vector.push_back(10); // [10]
    //vector.push_back(20); // [10][20]
    //vector.push_back(30); // [10][20][30]
    //vector.push_back(40); // [10][20][30][40]

    //vector.pop_back(); // [10][20][30]

    //for (int i = 0; i < vector.size(); i++)
    //{
    //    cout << "vector[" << i << "]의 값 : " << vector[i] << endl;
    //}

#pragma region Rhythm Game

    vector<int> arrows;
    int maxArrows = 4;
    int HP = 10;

    // 화살표 초기화
    initializeArrows(arrows, maxArrows);

    // 게임 루프
    while (!arrows.empty() && HP > 0)
    {
        system("cls");  // 화면 지우기
        displayArrows(arrows);  // 화살표 표시
        cout << "HP: " << HP << endl;
        cout << "Press an arrow key: ";

        int userInput = getUserInput();
        if (userInput != -1)
        {
            if (userInput == arrows.back())
            {
                arrows.pop_back();
            }
            else
            {
                --HP;
            }
        }

        if (HP <= 0)
        {
            system("cls");
            cout << "HP: " << HP << endl;
            cout << "Defeat!" << endl;
            break;
        }

        if (arrows.empty())
        {
            system("cls");
            cout << "HP: " << HP << endl;
            cout << "Victory!" << endl;
            break;
        }
    }

#pragma endregion

#pragma endregion


#pragma endregion

    return 0;
}
