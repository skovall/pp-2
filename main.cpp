#include <iostream>
#include <string>

void logMessage(const std::string& msg) {
    std::ofstream log("log.txt", std::ios::app);
    log << msg << std::endl;
}

void loadConfig() {
    std::string config = "config.txt";
    std::cout << "Загрузка конфигурации из " << config << std::endl;
}

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
