#include <vector>
#include <iostream>
#include <iomanip>

float shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0;
    for(int i=0; i<prices.size(); i++){
        float price = prices[i];
        float discount = (price * discounts[i]) / 100.0f;
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n);
    for(int i=0; i<n; i++){
        std::cin >> prices[i];
    }
    std::cin.ignore();
    std::cin >> n;
    std::vector<float> discounts(n);
    for(int i=0; i<n; i++){
        std::cin >> discounts[i];
    }
    std::cout << std::fixed << std::setprecision(1) << shoppingList(prices, discounts) << std::endl;
    return 0;
}