#include <iostream>

using namespace std;

int main()
{
	double speed = 60;
	double time = 2.5;

	double distance = speed * time;

	cout << time << "시간동안 " << speed << "km/h로 갔을 때 이동한 거리는 " << distance << "입니다." << endl;

	return 0;
}