#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "������ �Է��Ͻÿ�: ";
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
			cout << i << " ";
	}

	return 0;
}