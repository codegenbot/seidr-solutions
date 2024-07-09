#include <iostream>
#include <vector>
#include <iomanip>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = 1 - (discounts[i] / 100.0f); // calculate the discounted price and add to total
        total += price * discount; 
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
    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}