#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int age;

	cout << "나이: ";
	cin >> age;

	cout << "10년 후에는" << setw(3) << age << "살이 됩니다." << endl;



	return 0;

}