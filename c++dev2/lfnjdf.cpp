#include <iostream>

int main() {
    int number;
    std::cin >> number;

    int sum = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    std::cout<< sum;
	}
