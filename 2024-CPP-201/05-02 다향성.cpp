#include<iostream>
#include<string>
using namespace std;

class Animal {
public: // 메서드를 public으로 변경
    void bark() {
        cout << "잘 짖는다" << endl;
    }

    void sleep() {
        cout << "잘 잔다" << endl;
    }

    void eat() {
        cout << "잘 먹는다" << endl;
    }

private:
    string name;
    unsigned int age;
};

int main() { // 반환형을 int로 변경
    Animal* ani = new Animal();

    ani->bark();
    ani->sleep();
    ani->eat();

    delete ani;

    return 0; // int 반환형이므로 return 0; 추가
}
