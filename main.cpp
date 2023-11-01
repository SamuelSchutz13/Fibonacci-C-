#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    std::cout << "Digite o numero de termos: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "O numero de termos deve ser não negativo" << std::endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        std::cout << fibonacci(i) << " ";
    }

    std::cout << std::endl;

    return 0;
}
