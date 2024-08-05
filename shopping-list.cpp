#include <vector>
#include <iostream>

double calculateShoppingTrip(const std::vector<double>& prices, const std::vector<double>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
        totalPrice += (price - discount);
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<double> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    
    std::vector<double> discounts(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }
    
    double total = calculateShoppingTrip(prices, discounts);
    std::cout << total << std::endl;
    
    return 0;
}