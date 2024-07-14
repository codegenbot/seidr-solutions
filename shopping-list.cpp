```cpp
#include <iostream>
#include <stdexcept>

double shoppingList(std::vector<std::pair<float, float>> pricesAndDiscounts) {
    double total = 0;
    for (const auto& item : pricesAndDiscounts) {
        if(item.second != 1 - static_cast<double>(item.first) / 100.0){
            throw std::runtime_error("Each item must have a price and a discount");
        }
        total += item.first * item.second;
    }
    return total;
}