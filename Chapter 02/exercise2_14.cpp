#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	int n1, n2;

	char cal;

	int result;

	cout << "������ ����: ";
	cin >> cal;

	cout << "���ڸ� �Է��Ͻÿ�: ";
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
			cout << "�и� 0�Դϴ�. �������� �� �� �����ϴ�." << endl;
		result = 0;
		break;
		result = n1 / n2;
	default:
		break;

	}

	cout << "����� ���: " << result << endl;

	return 0;
}