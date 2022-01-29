#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float side1;
	float side2;
	float side3;

	cout << "첫 번째 변: ";
	cin >> side1;

	cout << "두 번째 변: ";
	cin >> side2;

	side3 = side1 * side1 + side2 * side2;

	cout << "빗변 길이: " << sqrt(side3)<< endl;


	return 0;
}