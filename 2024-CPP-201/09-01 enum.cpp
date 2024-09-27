#include<iostream>

using namespace std;

enum FoodStyle {
	Korean,  // 0
	Japanese, // 1
	Chinese // 2
};

void main(void) {
	// 0:한식, 1:일식 2:중식
	int style = Korean;  // Korean은 0

	switch (style) {
	case Korean:
		cout << "한식" << endl;
		break;
	case Japanese:
		cout << "일식" << endl;
		break;
	case Chinese:
		cout << "중식" << endl;
		break;
	}

}