```cpp
#include <vector>
#include <utility>

double shoppingList(std::vector<std::pair<double, double>>& pricesAndDiscounts) {
    double total = 0;
    for (const auto& pair : pricesAndDiscounts) {
        double price = pair.first;
        double discount = pair.second / 100.0f; 
        double discountedPrice = price * (1 - discount);
        total += discountedPrice;
    }
    return total;
}

int main() {
    return shoppingList({{10.0, 20}, {5.0, 15}, {3.0, 10}});
}