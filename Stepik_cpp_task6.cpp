// https://stepik.org/lesson/13021/step/8?unit=4362

#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	cout << a % 10 + a / 100 + a / 10 % 10;
	return 0;
}
