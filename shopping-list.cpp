double hoppingList(const std::vector<double>& prices, const std::vector<double>& discounts) {
    double result = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        result += prices[i] * (1 - discounts[i]);
    }
    return result;
}

int main() {
    std::vector<double> prices = {10.0, 20.0, 30.0};
    std::vector<double> discounts = {0.1, 0.2, 0.3};

    double result = hoppingList(prices, discounts);
    return 0;
}