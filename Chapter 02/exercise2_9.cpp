#include <iostream>

using namespace std;

int main()
{
	double c; // �����µ�
	double f; // ȭ���µ� 

	// c = (f - 32.0) * 5.0 / 9.0

	for (int i = 0; i <= 10; i++)
	{
		c = (i * 10 - 32.0) * 5.0 / 9.0;

		cout << i * 10 << "       " << c << endl;
	}

	return 0;
}