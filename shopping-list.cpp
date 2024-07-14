```cpp
#include <iostream>
#include <stdexcept>

double shoppingList(std::vector<std::initializer_list<float>> pricesAndDiscounts) {
    double total = 0;
    for (const auto& item : pricesAndDiscounts) {
        if(item.size() != 2){
            throw std::runtime_error("Each item must have a price and a discount");
        }
        total += item[0] * (1 - static_cast<double>(item[1]) / 100.0);
    }
    return total;
}