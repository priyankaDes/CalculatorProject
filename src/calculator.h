#pragma once

class Calculator {
public:
    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    double div(double a, double b); // assume b != 0 for now
    int fib(int n);
};
