#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()

{
	int time;
	int minute;
	int second;

	cout << "��: ";
	cin >> time;

	cout << "��: ";
	cin >> minute;

	cout << "��: ";
	cin >> second;

	cout << "��ü ��: " << (time * 3600) + (minute * 60) + second << endl;

	return 0;
}