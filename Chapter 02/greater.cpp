// 하나의 예로 사용자로부터 받은 두개의 정수 중에서 더 큰 수를 찾는 프로그램을 작성하기
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x;
	int y;

	cout << "x값을 입력하시오: ";
	cin >> x;

	cout << "y값을 입력하시오: ";
	cin >> y;

	if (x > y)
		cout << "x가 y보다 큽니다." << endl;
	else 
		cout << "y가 x보다 큽니다." << endl;


	return 0;
}