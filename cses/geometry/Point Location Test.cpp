#include <iostream>
using namespace std;

struct P {
	int x, y;
	void read() {
		cin >> x >> y;
	}
	P operator -(P he) {
		return P{x - he.x, y - he.y};
	}
	void operator -=(P he) {
		x -= he.x;
		y -= he.y;
	}
	long long operator *(P he) {
		return (long long) x * he.y - (long long) y * he.x;
	}
};

void test_case() {
	P p1, p2, p3;
	p1.read();
	p2.read();
	p3.read();
	p2 -= p1;
	p3 -= p1;
	long long cross_product = p2 * p3;
	if(cross_product < 0) {
		cout << "RIGHT" << '\n';
	}
	else if(cross_product > 0) {
		cout << "LEFT" << '\n';
	}
	else {
		cout << "TOUCH" << '\n';
	}
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
}
