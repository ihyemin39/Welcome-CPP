#include <iostream>

using namespace std;

int main()
{
	int money;
	int candy_price;

	cout << "���� ������ �ִ� �� : ";
	cin >> money;

	cout << "ĵ���� ���� : ";
	cin >> candy_price;

	// �ִ��� �� �� �ִ� ĵ���� ����
	int n_candies = money / candy_price;
	cout << "�ִ�� �� �� �ִ� ĵ���� ���� = " << n_candies << endl;
	
	// ĵ�� �����ϰ� ���� ��
	int change = money % candy_price;
	cout << "ĵ�� �����ϰ� ���� �� = " << change << endl;

	return 0;
}