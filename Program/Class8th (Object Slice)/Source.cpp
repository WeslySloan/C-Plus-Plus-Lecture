//#include <iostream>
//#include "Marine.h"
//#include "Firebet.h"
//#include "Ghost.h"
//
//void Beacon(Terran * terran)
//{
//	terran->Recovry();
//}
//
//
//int main()
//{
//#pragma region 객체 잘림
//	// 크기가 작은 상위 클래스에 상위 클래스보다 더 큰
//	// 하위 클래스를 대입하여 넣을 경ㅇ ㅜ클래스의 내용이
//	// 잘리는 현상입니다.
//
//	Marine marine;
//
//	marine.Damage(10);
//
//	Firebet firebet;
//	firebet.Damage(10);
//
//	Ghost ghost;
//	ghost.Damage(10);
//
//	Beacon(&marine);
//	Beacon(&firebet);
//	Beacon(&ghost);
//
//#pragma endregion
//
//}
//
//
//
////#include <iostream>
////
////using namespace std;
////
////class Terran
////{
////
////protected:
////    int health;
////    int maxHP;
////
////    void Recovery()
////    {
////        health = maxHP;
////        cout << "Recovered to max HP: " << health << endl;
////    }
////
////    void Damage(int damage)
////    {
////        health -= damage;
////    }
//// 
////    void Beacon(Terran)
////    {
////		 terran Recovery();
////    }
////
////public:
////    Terran()
////    {
////        cout << "Create Unit" << endl;
////    }
////
////    virtual void Skill() = 0;
////
////    ~Terran()
////    {
////        cout << "Release Unit" << endl;
////    }
////};
////
////class Marine :public Terran
////{
////public:
////    Marine()
////    {
////        cout << "Create Marine" << endl;
////    }
////
////    virtual void Skill() override
////    {
////        cout << "Steam Pack" << endl;
////    }
////
////    ~Marine()
////    {
////        cout << "Release Marine" << endl;
////    }
////};
////
////class Ghost : public Terran
////{
////public:
////
////    Ghost()
////    {
////        health = 50;
////        cout << "Create Ghost" << endl;
////    }
////
////    virtual void Skill() override
////    {
////        cout << "Lock down" << endl;
////    }
////
////    ~Ghost()
////    {
////        health = 50;
////        cout << "Release Ghost" << endl;
////    }
////};
////