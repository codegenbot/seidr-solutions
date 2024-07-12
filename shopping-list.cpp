#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(2);

    float total_price = 0;

    for (int i = 0; i < n; ++i) {
        float price, discount;
        std::cin >> price >> discount;
        total_price += price - price * discount / 100;
    }

    std::cout << total_price << std::endl;

    return 0;
}