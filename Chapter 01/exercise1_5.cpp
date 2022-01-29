#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double pyeong;
	

	cout << "평: ";
	cin >> pyeong;

	const double space = pyeong * 3.3058;

	cout << "평방미터: " << space << endl;


	return 0;
}