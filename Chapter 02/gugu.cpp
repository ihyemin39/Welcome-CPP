// 구구단표의 일부(1단,2단,2단)를 2차원 배열에 저장하고 출력해보자
#include <iostream>

using namespace std;

#define WIDTH 9
#define HEIGHT 3

int main()
{
	int table[HEIGHT][WIDTH];
	int r, c;

	for (r = 0; r < HEIGHT; r++)
		for (c = 0; c < WIDTH; c++)
			table[r][c] = (r + 1)*(c + 1);

	for (r = 0; r < HEIGHT; r++) {
		for (c = 0; c < WIDTH; c++) {
			cout << table[r][c] << ", ";
		}
		cout << endl;
	}
	

	return 0;
}