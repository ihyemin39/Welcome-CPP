// 사용자가 "종료"를 입력하기 전까지는 사용자의 입력을 그대로 화면에 출력하는 프로그램
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	do {
		cout << "문자열을 입력하시오: ";
		getline(cin, str); //C++ 스타일의 문자열 입력 방식
		cout << "사용자의 입력: " << str << endl;
	} while (str != "종료");

	return 0;
}