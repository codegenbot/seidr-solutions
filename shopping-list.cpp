#include <vector>
#include <iostream>

double calculateTotalPrice(const std::vector<double>& prices, const std::vector<double>& discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        totalPrice += (price - discount);
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> prices(n);
    for (auto& price : prices) {
        std::cin >> price;
    }

    std::vector<double> discounts(n);
    for (auto& discount : discounts) {
        std::cin >> discount;
    }

    double totalPrice = calculateTotalPrice(prices, discounts);

    std::cout << std::fixed << std::setprecision(1) << totalPrice << std::endl;

    return 0;
}