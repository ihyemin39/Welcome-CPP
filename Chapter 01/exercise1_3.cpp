#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float side1;
	float side2;
	float side3;

	cout << "ù ��° ��: ";
	cin >> side1;

	cout << "�� ��° ��: ";
	cin >> side2;

	side3 = side1 * side1 + side2 * side2;

	cout << "���� ����: " << sqrt(side3)<< endl;


	return 0;
}