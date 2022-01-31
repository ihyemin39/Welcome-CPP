// 정수를 입력 받아서 영어로 출력하는 프로그램
#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "숫자를 입력하시오: ";
	cin >> number;

	switch (number) {
	case 0:
		cout << "zero";
		break;
	case 1:
		cout << "one";
		break;
	case 2:
		cout << "two";
		break;
	default:
		cout << "many";
		break;

	}

	return 0;
}