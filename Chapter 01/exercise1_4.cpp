#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	float length;
	float width;
	float height;

	cout << "����: ";
	cin >> length;

	cout << "�ʺ�: ";
	cin >> width;

	cout << "����: ";
	cin >> height;

	float volume;
	volume = length * width * height;

	float surface;
	surface = 2 * ((length * width) + (length * height) + (height *width));


	cout << "������ ����: " << volume << endl;
	cout << "������ ǥ����: " << surface << endl;

	return 0;
}