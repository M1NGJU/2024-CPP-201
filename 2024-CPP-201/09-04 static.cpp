﻿#include<iostream>
#include<string>

using namespace std;

class PrettyJ {
private:
	static int num_;
	int gam_;
	string name_;
public:
	PrettyJ(int gam, string name) : gam_(gam), name_(name) {
		num_++;
	}
	static int* get_address_num(void) { return &num_; }
	static int get_num(void) { return num_; }
	int* get_address_gam(void) { return &gam_; }
	int get_gam(void) { return gam_; }
};
// static 멤버변수 초기화는 바깥에서 하자
int PrettyJ::num_ = 0;

void main(void) {
	PrettyJ* jihye = new PrettyJ(508, "김지혜");
	PrettyJ* juyoung = new PrettyJ(509, "윤주영");
	PrettyJ* jungmin = new PrettyJ(716, "심정민레이디");
	cout << "현재 멤버 인원은 " << PrettyJ::get_num() << endl;

	PrettyJ* jiwoo = new PrettyJ(601, "박지우");
	cout << "현재 멤버 인원은 " << PrettyJ::get_num() << endl << endl;

	cout << "지혜 gam의 주소" << jihye->get_address_gam() << endl;
	cout << "주영 gam의 주소" << juyoung->get_address_gam() << endl;
	cout << "정민 gam의 주소" << jungmin->get_address_gam() << endl;
	cout << "지우 gam의 주소" << jiwoo->get_address_gam() << endl<<endl;

	cout << "지혜 num의 주소" << jihye->get_address_num() << endl;
	cout << "주영 num의 주소" << juyoung->get_address_num() << endl;
	cout << "정민 num의 주소" << jungmin->get_address_num() << endl;
	cout << "지우 num의 주소" << jiwoo->get_address_num() << endl << endl;

	delete jiwoo;
	delete jungmin;
	delete juyoung;
	delete jihye;
	
}