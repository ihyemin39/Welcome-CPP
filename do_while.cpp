// ����ڰ� "����"�� �Է��ϱ� �������� ������� �Է��� �״�� ȭ�鿡 ����ϴ� ���α׷�
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	do {
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		getline(cin, str); //C++ ��Ÿ���� ���ڿ� �Է� ���
		cout << "������� �Է�: " << str << endl;
	} while (str != "����");

	return 0;
}