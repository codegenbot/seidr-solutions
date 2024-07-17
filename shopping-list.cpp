#include <vector>
#include <pair>

double shoppingList(std::vector<std::pair<double, double>> pricesDiscounts) {
    double total = 0;
    for (auto& pair : pricesDiscounts) {
        total += pair.first * (1 - pair.second / 100.0); 
    }
    return total;
}