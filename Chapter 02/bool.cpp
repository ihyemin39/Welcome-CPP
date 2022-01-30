// 관계 연산자를 이용하여 간단한 관계 수식을 만들고 수식의 결과를 bool 변수에 저장하고 출력해보기
#include <iostream>

using namespace std;

int main()
{
	bool b;
	b = (1 == 2);

	cout << std::boolalpha;
	cout << b << endl;

	return 0;
}