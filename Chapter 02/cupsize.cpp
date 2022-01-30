// 컵의 사이즈를 받아서 100 ml미만은 small, 100 ml이상 200 ml미만은 medium, 200 ml 이상은 large라고 출력하는 if-else 문을 작성하시오.
#include <iostream>

using namespace std;

int main()
{
	int cupsize;
	cout << "컵의 사이즈를 알려주세요: ";
	cin >> cupsize;

	if (cupsize < 100)
		cout << "small" << endl;
	else if (cupsize < 200)
		cout << "medium" << endl;
	else
		cout << "large" << endl;

	return 0;
}