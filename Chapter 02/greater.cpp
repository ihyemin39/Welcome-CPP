// �ϳ��� ���� ����ڷκ��� ���� �ΰ��� ���� �߿��� �� ū ���� ã�� ���α׷��� �ۼ��ϱ�
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x;
	int y;

	cout << "x���� �Է��Ͻÿ�: ";
	cin >> x;

	cout << "y���� �Է��Ͻÿ�: ";
	cin >> y;

	if (x > y)
		cout << "x�� y���� Ů�ϴ�." << endl;
	else 
		cout << "y�� x���� Ů�ϴ�." << endl;


	return 0;
}