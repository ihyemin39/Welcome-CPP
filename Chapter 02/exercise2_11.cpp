#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	int sum = 0;

	cout << "n�� ���� �Է��Ͻÿ�: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum += i * i;

	}

	cout << "��갪�� " << sum << "�Դϴ�." << endl;

	return 0;
}