float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        if(discounts[i] > 100) {
            std::cout << "Invalid discount. Please enter a valid discount percentage.\n";
            return -1;
        }
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    while (true) {
        if (!(std::cin >> prices.size())) break; // Ask for input
        for (size_t i = 0; i < prices.size(); ++i) {
            float price, discount;
            if ((std::cin >> price >> discount).fail()) { // Check for invalid input
                std::cout << "Invalid input. Please enter a valid price and discount.\n";
                return 1;
            }
            prices.push_back(price);
            discounts.push_back(discount); 
        }

    }
    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}