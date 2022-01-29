#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	float length;
	float width;
	float height;

	cout << "길이: ";
	cin >> length;

	cout << "너비: ";
	cin >> width;

	cout << "높이: ";
	cin >> height;

	float volume;
	volume = length * width * height;

	float surface;
	surface = 2 * ((length * width) + (length * height) + (height *width));


	cout << "상자의 부피: " << volume << endl;
	cout << "상자의 표면적: " << surface << endl;

	return 0;
}