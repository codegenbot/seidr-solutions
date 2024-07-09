#include <iostream>
#include <vector>
#include <iomanip>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = discounts[i] / 100.0f; // convert percentage to decimal
        total += price * (1 - discount); // calculate the discounted price and add to total
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
    std::cout << std::fixed << std::setprecision(1) << shoppingList(prices, discounts) << std::endl;
}