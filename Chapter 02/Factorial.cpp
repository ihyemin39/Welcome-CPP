// ���丮�� ���� ����غ���.
// '���丮��' �̶�?  n! = 1 x 2 x 3 x ... x n

#include <iostream>

using namespace std;

int main()
{
	long fact = 1;
	int n;

	cout << "������ �Է��Ͻÿ�: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
		fact = fact * i;

	cout << n << "!�� " << fact << "�Դϴ�.";

	return 0;
}