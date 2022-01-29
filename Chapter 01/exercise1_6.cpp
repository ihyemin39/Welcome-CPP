#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()

{
	int time;
	int minute;
	int second;

	cout << "시: ";
	cin >> time;

	cout << "분: ";
	cin >> minute;

	cout << "초: ";
	cin >> second;

	cout << "전체 초: " << (time * 3600) + (minute * 60) + second << endl;

	return 0;
}