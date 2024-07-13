#include <vector>
#include <iostream>

double totalShoppingTripCost(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    for (float &price : prices) {
        std::cin >> price;
    }

    std::vector<float> discounts(n);
    for (float &discount : discounts) {
        std::cin >> discount;
    }

    std::cout << fixed << setprecision(1) << totalShoppingTripCost(prices, discounts) << "\n";

    return 0;
}