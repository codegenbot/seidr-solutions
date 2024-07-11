#include <iostream>
#include <vector>

double calculateTotalPrice(std::vector<double> prices, std::vector<double> discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    std::vector<double> prices = {15.2, 29.31, 5.39, 41.88, 25.62, 3.9, 8.75, 37.99, 34.63, 6.97, 42.01, 26.47, 26.08, 35.62, 13.11};
    std::vector<double> discounts = {36.85, 42.67, 87.24, 24.43, 54.76, 37.69, 51.44, 39.73, 43.66, 65.73, 62.32, 85.87, 18.02, 24.77, 85.44};

    double totalPrice = calculateTotalPrice(prices, discounts);
    
    std::cout << "Total Price after discounts: " << totalPrice << std::endl;

    return 0;
}