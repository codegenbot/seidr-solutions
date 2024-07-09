```c++
#include <vector>

double hoppingList(std::vector<double> prices, std::vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    double prices[] = {10.0, 20.0, 30.0};
    double discounts[] = {0.1, 0.2, 0.3};
    std::vector<double> vec_prices(prices, prices + sizeof(prices) / sizeof(prices[0]));
    std::vector<double> vec_discounts(discounts, discounts + sizeof(discounts) / sizeof(discounts[0]));
    double result = hoppingList(vec_prices, vec_discounts);
    return 0;
}