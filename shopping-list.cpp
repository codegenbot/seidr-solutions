#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    float total_price = 0;

    for (int i = 0; i < n; ++i) {
        float price, discount;
        std::cin >> price >> discount;
        total_price += price * (100 - discount) / 100.0;
    }

    std::cout << std::fixed << std::setprecision(2) << total_price << std::endl;

    return 0;
}