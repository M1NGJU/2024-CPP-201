#include <iostream>
#include <string>
using namespace std;

class SSG {
public:
    SSG(string name, string role)
        : name_(name), role_(role)
    {
        
    }
    ~SSG()
    {
        
    }
    void show_SSG() {
        cout << name_ << "의 역할은 " << role_ << "이고 ";
    }
private:
    string name_;
    string role_;
};

// SSG의 자식 클래스
class SSGmember : public SSG {
public:
    SSGmember(string name, string role, string position)
        : SSG(name, role), position_(position) {
    }
    ~SSGmember()
    {
    }
    void show_SSG(void) {
        SSG::show_SSG();
        cout << "포지션은 " << position_ << "입니다" << endl;
    }
private:
    string position_;
};

int main(void) {
    SSGmember* gam = new SSGmember("최지훈", "선수", "외야수");
    cout << "SSG의 감독은 이숭용 " << endl;
    gam->show_SSG();
    delete gam; // 동적으로 할당한 메모리 해제
    return 0;
}
