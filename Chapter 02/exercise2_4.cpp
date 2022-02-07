#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;
	
	for (int i = 0; i < 5; i++) {
		cout << "정수를 5번 입력하세요: ";
		cin >> a >> b >> c >> d >> e;

		if ((a || b == 5) && (c || d == 5) && e == 5)
			cout << "5를 입력하셨군요! 컴퓨터 승" << endl;
		else
			cout << "인내심이 강합니다. 사용자 승" << endl;
		break;
		}
	
	return 0;

} 