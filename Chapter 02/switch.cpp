// ������ �Է� �޾Ƽ� ����� ����ϴ� ���α׷�
#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "���ڸ� �Է��Ͻÿ�: ";
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