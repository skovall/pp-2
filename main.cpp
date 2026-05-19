#include <iostream>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int a, b;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;
    
    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    std::cout << a << " * " << b << " = " << multiply(a, b) << std::endl;
    
    return 0;
}

