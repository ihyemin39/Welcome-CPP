// 팩토리얼 값을 계산해보자.
// '팩토리얼' 이란?  n! = 1 x 2 x 3 x ... x n

#include <iostream>

using namespace std;

int main()
{
	long fact = 1;
	int n;

	cout << "정수를 입력하시오: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
		fact = fact * i;

	cout << n << "!은 " << fact << "입니다.";

	return 0;
}