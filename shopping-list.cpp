```cpp
double shoppingList(std::vector<std::pair<float, float>> pricesAndDiscounts) {
    double total = 0;
    for (const auto& item : pricesAndDiscounts) {
        if(item.second > 100.0f){
            throw std::runtime_error("Each discount must be a percentage between 1 and 100");
        }
        total += item.first * (1 - static_cast<double>(item.second) / 100.0);
    }
    return total;
}