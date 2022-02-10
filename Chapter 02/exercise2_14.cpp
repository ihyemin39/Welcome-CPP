#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	int n1, n2;

	char cal;

	int result;

	cout << "연산의 종류: ";
	cin >> cal;

	cout << "숫자를 입력하시오: ";
	cin >> n1 >> n2;

	switch (cal) {
	case '+':
		result = n1 + n2;
		break;
	case '-':
		result = n1 - n2;
		break;
	case '*':
		result = n1 * n2;
		break;
	case '/':
		if (n2 == 0)
			cout << "분모가 0입니다. 나눗셈을 할 수 없습니다." << endl;
		result = 0;
		break;
		result = n1 / n2;
	default:
		break;

	}

	cout << "계산의 결과: " << result << endl;

	return 0;
}