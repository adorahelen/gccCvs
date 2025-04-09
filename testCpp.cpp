#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // 기본 생성자
    Person() {
        name = "Unknown";
        age = 0;
    }

    // 매개변수가 있는 생성자
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "이름: " << name << ", 나이: " << age << endl;
    }
};

int main() {

    Person p1;              // 기본 생성자 호출
    Person p2("홍길동", 30);  // 매개변수 생성자 호출

    p1.display();
    p2.display();

    return 0;
}
// g++ testCpp.cpp -o testCpp
// ./testCpp