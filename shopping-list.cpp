int main() {
    std::vector<float> prices;
    float price;
    while(std::cin >> price) {
        prices.push_back(price);
    }

    int numItems = prices.size();
    std::vector<float> discounts(numItems);
    for (int i = 0; i < numItems; i++) {
        std::cin >> discounts[i];
    }
    
    double result = shoppingList(prices, discounts);
    std::cout << "Total price after discount: $" << result << std::endl;
    return 0;
}