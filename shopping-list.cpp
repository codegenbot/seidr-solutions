```cpp
#include <iostream>
#include <vector>
#include <iomanip>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n);
    std::fill(prices.begin(), prices.end(), 0.0);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    std::cin.ignore();
    int m;
    std::cin >> m;
    std::vector<float> discounts(m);
    std::fill(discounts.begin(), discounts.end(), 0.0);
    for (int i = 0; i < m; i++) {
        std::cin >> discounts[i];
    }
    std::cout << std::fixed << std::setprecision(6) << shoppingList(prices, discounts) << std::endl;
}