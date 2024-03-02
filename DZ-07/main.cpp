#include <iostream>

class Calculator {
private:
    const int N;
    const int SUM;

public:
    Calculator(int n) : N(n), SUM(Calculate(N)) {}
    ~Calculator() = default;

public:
    void print() {
        std::cout << "Rezultat je:\n" << SUM << std::endl;
    }

private:
    static const int Calculate(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++)sum += i;
        return sum;
    }
};

int main(void) {
    int n = EXIT_SUCCESS;
    do {
        std::cout << "Enter n:";
        std::cin >> n;

        if (n <= EXIT_SUCCESS)break;

        Calculator calc(n);
        calc.print();

    } while (n > EXIT_SUCCESS);

    return EXIT_SUCCESS;
}