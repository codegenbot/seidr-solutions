#include <iostream>
#include <iomanip>
#include <vector>

float shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100);
        totalPrice += price - discount;
    }
    return totalPrice;
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

    return 0;
}