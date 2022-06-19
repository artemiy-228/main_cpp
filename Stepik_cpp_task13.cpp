// https://stepik.org/lesson/13021/step/15?unit=4362

#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	int b = a % 10 * 1000 + a / 10 % 10 * 100 + a / 100 % 10 * 10 + a / 1000;
	cout << 1 + (a - b);
	return 0;
}
