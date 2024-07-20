#include <vector>
#include <iostream>

double totalPriceAfterDiscount(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = discounts[i] / 100.0; // Convert percent to decimal
        double discountedPrice = price * (1 - discount); // Calculate discounted price
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    for (float& price : prices) {
        std::cin >> price;
    }

    std::vector<float> discounts(n);
    for (float& discount : discounts) {
        std::cin >> discount;
    }

    double result = totalPriceAfterDiscount(prices, discounts);

    std::cout << result << std::endl;

    return 0;
}