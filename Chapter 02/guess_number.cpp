// ���� ���߱� ����
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����

	int answer = rand() % 100; // ����  // [0 ~ 99]
	int guess;
	int tries = 0;
	// �ݺ�����
	do {
		cout << "������ �����Ͽ� ���ÿ�: ";
		cin >> guess;
		tries++;

		if (guess > answer)        // ����ڰ� �Է��� ������ ���亸�� ������
			cout << "������ ������ �����ϴ�." << endl;
		if (guess < answer)        // ����ڰ� �Է��� ������ ���亸�� ������
			cout << "������ ������ �����ϴ�." << endl;
	} while (guess != answer);
	cout << "�����մϴ�. �õ� Ƚ�� = " << tries << endl;

	return 0;
}