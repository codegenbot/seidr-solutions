#include <vector>
#include <cmath>
#include <initializer_list>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] - (prices[i] * (discounts[i] / 100.0));
    }
    return total;
}

int main() {
    std::vector<float> prices = {10, 20, 30};
    std::vector<float> discounts = {5, 7, 3};

    double result = shoppingList(prices, discounts);
    printf("Total price after discount: %f\n", result);

    return 0;
}