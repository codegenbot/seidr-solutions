#include <vector>
#include <iostream>

double totalShoppingTripCost(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0.0;

    int n;
    std::cin >> n; 

    std::vector<float> prices(n);
    std::vector<float> discounts(n);

    for (int i = 0; i < n; i++) {
        std::cin >> prices[i] >> discounts[i]; 
    }

    for (int i = 0; i < n; i++) {
        total += prices[i] - (prices[i] * (discounts[i] / 100.0));
    }

    return total;
}