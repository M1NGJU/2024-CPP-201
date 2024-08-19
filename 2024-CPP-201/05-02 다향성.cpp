#include<iostream>
#include<string>
using namespace std;

class Animal {
public: // 메서드를 public으로 변경
    Animal(string name, unsigned int age)
    : name_(name), age_(age){
        cout << "이름" << name_ << endl;
        cout << "나이" << age_ << endl;
    }
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
    string name_;
    unsigned int age_;
};

class human : public Animal {
public:
 
private:
    bool right_;
};


int main() { // 반환형을 int로 변경
    Animal* ani = new Animal("정민레이디",18);

    ani->bark();
    ani->sleep();
    ani->eat();

    delete ani;

    return 0; // int 반환형이므로 return 0; 추가
}
