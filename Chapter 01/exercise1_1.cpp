#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string subject;
	string verb;
	string object;

	cout << "�־�: ";
	cin >> subject;

	cout << "����: ";
	cin >> verb;

	cout << "������: ";
	cin >> object;

	cout << subject << setw(5) << verb << setw(3) << "a" << setw(5) << object << endl;



	return 0;

}