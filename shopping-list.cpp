double shoppingList(std::vector<std::pair<float, float>>& pricesAndDiscounts) {
    double total = 0;
    for (const auto& pair : pricesAndDiscounts) {
        double price = pair.first;
        double discount = pair.second / 100.0f; 
        double discountedPrice = price * (1 - discount);
        total += discountedPrice;
    }
    return total;