#include<iostream>
#include<functional>

using std::function;
using std::cout;
using std::endl;

int main() {
	//shell lambda of expresion for calculate GCD 
	function <int(int, int)> gcd = [&](int m, int n) mutable -> int {
		if (m < n) return gcd(n, m);
		int remainder (m % n);
		if (0 == remainder) return n;
		return gcd(n, remainder);
	};

	int a = 17779, b = 18879;
	cout << "For number " << a << " and " << b
		<< " GCD is " << gcd(a, b) << endl;

	a = 103 * 53 * 17 * 97; b = 3 * 29 * 103;
	cout << "For numbers " << a << " and " << b
		<< " GCD is " << gcd(a, b) << endl;

	system("pause");
	return 0;
}