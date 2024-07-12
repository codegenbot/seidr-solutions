#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(2);

    float total_price = 0;

    for (int i = 0; i < n; ++i) {
        float price, discount;
        std::cin >> price >> discount;
        total_price += price * (100.0 - discount) / 100.0;
    }

    total_price = round(total_price * 100) / 100;

    std::cout << total_price << std::endl;

    return 0;
}