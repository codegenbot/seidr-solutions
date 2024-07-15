int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
        std::cin >> std::noskipws;
    }
    std::cin.ignore();
    std::cin >> n;
    std::vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        std::cin >> discounts[i];
    }
    std::cout << std::fixed << std::setprecision(6) << shoppingList(prices, discounts) << std::endl;
}