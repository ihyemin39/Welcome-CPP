#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string subject;
	string verb;
	string object;

	cout << "주어: ";
	cin >> subject;

	cout << "동사: ";
	cin >> verb;

	cout << "목적어: ";
	cin >> object;

	cout << subject << setw(5) << verb << setw(3) << "a" << setw(5) << object << endl;



	return 0;

}