#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "정수를 입력하시오: ";
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
			cout << i << " ";
	}

	return 0;
}