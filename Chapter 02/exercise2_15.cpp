#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int user, computer;

	srand((unsigned)time(NULL));

	cout << "����, ����, �� �߿� �ϳ��� �����Ͻÿ�.(1, 2, 3): ";
	cin >> user;

	computer = (rand() % 3) + 1;

	cout << "��ǻ��: " << computer << endl;

	if (user == computer)
		cout << "���º�!" << endl;
	else if (((user == 3) && (computer == 1)) || ((user == 1) && (computer == 2)) || ((user == 2) && (computer == 3)))
		cout << "��ǻ�� ��!" << endl;
	else
		cout << "����� ��!" << endl;


	return 0;
}