#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	float quiz1;
	float quiz2;
	float quiz3;
	float midterm;
	float final;

	cout << "퀴즈 #1 성적: ";
	cin >> quiz1;

	cout << "퀴즈 #2 성적: ";
	cin >> quiz2;

	cout << "퀴즈 #3 성적: ";
	cin >> quiz3;

	cout << "중간고사 성적: ";
	cin >> midterm;

	cout << "기말고사 성적: ";
	cin >> final;


	cout << "성적 총합: " << quiz1 + quiz2 + quiz3 + midterm + final << endl;


	return 0;
}