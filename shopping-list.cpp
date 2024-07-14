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
    std::vector<std::pair<double, double>> pricesAndDiscounts({{10.99, 20}, {5.99, 15}, {7.99, 25}});
    double totalPrice = shoppingList(pricesAndDiscounts);
    std::cout << "Total price: $" << totalPrice << std::endl;
    return 0;
}