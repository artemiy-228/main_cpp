// https://stepik.org/lesson/13021/step/13?unit=4362

#include <iostream>

using namespace std;

int main() {
	int a, b, c, a1, b1, c1, d;
	cin >> a >> b >> c >> a1 >> b1 >> c1;
	d = (a1 * 3600 + b1 * 60 + c1) - (a * 3600 + b * 60 + c);
	cout << d;
	return 0;
}
