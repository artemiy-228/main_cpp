// https://stepik.org/lesson/13021/step/11?unit=4362

#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int d = a * c * 100 + b * c;
	cout << d / 100 << " " << d % 100;
	return 0;
}
