float shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0;
    for(int i=0; i<prices.size(); i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100);
        total += price - discount;
    }
    return total;
}