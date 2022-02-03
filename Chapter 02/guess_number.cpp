// 숫자 맞추기 게임
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL)); // 매번 다른 시드값 생성

	int answer = rand() % 100; // 정담  // [0 ~ 99]
	int guess;
	int tries = 0;
	// 반복구조
	do {
		cout << "정답을 추측하여 보시오: ";
		cin >> guess;
		tries++;

		if (guess > answer)        // 사용자가 입력한 정수가 정답보다 높으면
			cout << "제시한 정수가 높습니다." << endl;
		if (guess < answer)        // 사용자가 입력한 정수가 정답보다 낮으면
			cout << "제시한 정수가 낮습니다." << endl;
	} while (guess != answer);
	cout << "축하합니다. 시도 횟수 = " << tries << endl;

	return 0;
}