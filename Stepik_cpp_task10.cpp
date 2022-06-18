// https://stepik.org/lesson/13021/step/12?unit=4362

#include <iostream>

using namespace std;

int main() {
	int a, t, h, m , s;
	cin >> a;
	t = a / 3600 * 3600;
	h = t / 3600 - t / 3600 / 24 * 24;
	m = a / 60 % 60;
	s = a % 60;
	cout << h << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10;
	return 0;
}
