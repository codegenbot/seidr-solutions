#include <iomanip>
#include <iostream>

int main() {
    float prices[100];
    float discounts[100];

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> prices[i] >> discounts[i];
    }

    double total_price = 0;
    for(int i = 0; i < n; i++) {
        total_price += prices[i] * (1 - discounts[i]/100.0);
    }

    std::cout << "Total price after discount: $" 
              << std::setprecision(2) << total_price << std::endl;

    return 0;
}