// ���� ����� �޾Ƽ� 100 ml�̸��� small, 100 ml�̻� 200 ml�̸��� medium, 200 ml �̻��� large��� ����ϴ� if-else ���� �ۼ��Ͻÿ�.
#include <iostream>

using namespace std;

int main()
{
	int cupsize;
	cout << "���� ����� �˷��ּ���: ";
	cin >> cupsize;

	if (cupsize < 100)
		cout << "small" << endl;
	else if (cupsize < 200)
		cout << "medium" << endl;
	else
		cout << "large" << endl;

	return 0;
}