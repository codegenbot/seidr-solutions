#include <vector>
#include <iostream>

double calculateShoppingTripTotal(const std::vector<double>& prices, const std::vector<double>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<double> prices(n);
    for (double& price : prices) {
        std::cin >> price;
    }

    std::vector<double> discounts(n);
    for (double& discount : discounts) {
        std::cin >> discount;
    }
    
    double total = calculateShoppingTripTotal(prices, discounts);
    std::cout << total << std::endl;

    return 0;
}