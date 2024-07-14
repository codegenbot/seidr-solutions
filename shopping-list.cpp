#include <vector>
#include <numeric>

double shoppingList(const std::vector<std::pair<float, float>>& pricesAndDiscounts) {
    return std::accumulate(pricesAndDiscounts.begin(), pricesAndDiscounts.end(),
        0.0f,
        [&](double total, const auto& pair) {
            double price = pair.first;
            double discount = pair.second / 100.0f; 
            return total + price * (1 - discount);
        });
}