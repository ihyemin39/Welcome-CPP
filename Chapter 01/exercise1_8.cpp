#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	float quiz1;
	float quiz2;
	float quiz3;
	float midterm;
	float final;

	cout << "���� #1 ����: ";
	cin >> quiz1;

	cout << "���� #2 ����: ";
	cin >> quiz2;

	cout << "���� #3 ����: ";
	cin >> quiz3;

	cout << "�߰���� ����: ";
	cin >> midterm;

	cout << "�⸻��� ����: ";
	cin >> final;


	cout << "���� ����: " << quiz1 + quiz2 + quiz3 + midterm + final << endl;


	return 0;
}