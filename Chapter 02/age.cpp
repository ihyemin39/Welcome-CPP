// 사용자로부터 나이를 받아서 어린이, 청소년, 성인을 구분하는 프로그램 작성
#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "나이를 입력하시오: ";
	cin >> age;

	if (age <= 12)
		cout << "어린이입니다." << endl;
	else if (age <= 19)
		cout << "청소년입니다." << endl;
	else 
		cout << "성인입니다." << endl;

	return 0;
}