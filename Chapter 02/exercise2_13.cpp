#include <iostream>

using namespace std;

int main()
{
	int p = 0;
	int n = 1;
	int t = 0;
	int input;



	cout << "�� �ױ��� ���ұ��: ";
	cin >> input;

	p = 0;
	n = 1;

	cout << p << " " << n << " ";

	for (int i = 2; i < input; i++) {
		
		t = n;
		n += p; // n = n + p
		p = t;

		cout << n << " ";
		 
	}

	return 0;
}