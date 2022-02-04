// 도형의 면저 계산하기
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double choice;
	double area1, length, width;
	double area2, bottom, height;
	double area3, round;

	cout << "도형을 선택하시오(1, 2, 3): ";
	cin >> choice;
	if (choice == 1) {      // 사각형
		cout << "가로: ";
		cin >> length;
		cout << "세로: ";
		cin >> width;
		area1 = length * width;
		cout << "면적: " << area1 << endl;

	}
	else if (choice == 2) { // 삼각형
		cout << "밑변: ";
		cin >> bottom;
		cout << "높이: ";
		cin >> height;
		area2 = (1.0 / 2.0) * bottom * height;
		cout << "면적: " << area2 << endl;
	}
	else if (choice == 3) { // 원
		cout << "반지름: ";
		cin >> round;
		area3 = M_PI * round * round;
		cout << "면적: " << area3 << endl;
	}
	else {
		cout << "올바르지 못한 선택입니다." << endl;

	}

	return 0;
}