#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    
    int result = add(5, 3);
    std::cout << "5 + 3 = " << result << std::endl;
    
    return 0;
}

int multiply(int a, int b) {
    return a * b;
}

std::cout << "5 * 3 = " << multiply(5, 3) << std::endl;