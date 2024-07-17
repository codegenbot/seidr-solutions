#include <iostream>
#include <vector>
#include <sstream>

double shoppingList(std::string str) {
    std::istringstream iss(str);
    double total = 0;
    float price, discount;

    while (iss >> price >> discount) {
        total += price * (1 - discount / 100.0);
    }

    return total;
}

int main() {
    // Test the function
    std::cout << shoppingList("19 36.27 1.67 37.62 23.7 24.56 14.92 40.23 46.92 31.22 14.73 47.85 31.14 40.21 33.12 0.87 10.52 20.49 43.54 43.53") << std::endl;
    // Test the function with another input
    std::cout << shoppingList("81.32 31.31 26.19 96.16 32.56 32.36 14.12 65.3 17.21 40.34 60.48 7.87 93.81 65.45 8.54 88.42 18.73 99.39 18.31") << std::endl;
    return 0;
}