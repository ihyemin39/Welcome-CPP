#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;
	
	for (int i = 0; i < 5; i++) {
		cout << "������ 5�� �Է��ϼ���: ";
		cin >> a >> b >> c >> d >> e;

		if ((a || b == 5) && (c || d == 5) && e == 5)
			cout << "5�� �Է��ϼ̱���! ��ǻ�� ��" << endl;
		else
			cout << "�γ����� ���մϴ�. ����� ��" << endl;
		break;
		}
	
	return 0;

} 