#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int user, computer;

	srand((unsigned)time(NULL));

	cout << "가위, 바위, 보 중에 하나를 선택하시오.(1, 2, 3): ";
	cin >> user;

	computer = (rand() % 3) + 1;

	cout << "컴퓨터: " << computer << endl;

	if (user == computer)
		cout << "무승부!" << endl;
	else if (((user == 3) && (computer == 1)) || ((user == 1) && (computer == 2)) || ((user == 2) && (computer == 3)))
		cout << "컴퓨터 승!" << endl;
	else
		cout << "사용자 승!" << endl;


	return 0;
}