// ������ ���� ����ϱ�
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double choice;
	double area1, length, width;
	double area2, bottom, height;
	double area3, round;

	cout << "������ �����Ͻÿ�(1, 2, 3): ";
	cin >> choice;
	if (choice == 1) {      // �簢��
		cout << "����: ";
		cin >> length;
		cout << "����: ";
		cin >> width;
		area1 = length * width;
		cout << "����: " << area1 << endl;

	}
	else if (choice == 2) { // �ﰢ��
		cout << "�غ�: ";
		cin >> bottom;
		cout << "����: ";
		cin >> height;
		area2 = (1.0 / 2.0) * bottom * height;
		cout << "����: " << area2 << endl;
	}
	else if (choice == 3) { // ��
		cout << "������: ";
		cin >> round;
		area3 = M_PI * round * round;
		cout << "����: " << area3 << endl;
	}
	else {
		cout << "�ùٸ��� ���� �����Դϴ�." << endl;

	}

	return 0;
}