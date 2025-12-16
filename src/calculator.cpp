#include "calculator.h"

int Calculator::add(int a, int b) { return a + b; }
int Calculator::sub(int a, int b) { return a - b; }
int Calculator::mul(int a, int b) { return a * b; }
double Calculator::div(double a, double b) { return a / b; }
int Calculator::fib(int n) {
	int prev = 0;
	int curr = 1;
	
	if (n <= 1) {
		return n;
	}

	for (int i = 2; i <= n; ++i) {
		int next = prev + curr;
		prev = curr;
		curr = next;
	}
	return curr;
}