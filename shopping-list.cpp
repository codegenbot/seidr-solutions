int main() {
    double price, discount;
    std::vector<std::pair<double, double>> pricesAndDiscounts;

    while (std::cin >> price >> discount) {
        pricesAndDiscounts.push_back({price, discount});
    }

    double totalPrice = shoppingList(pricesAndDiscounts);
    std::cout << "Total price: $" << totalPrice << std::endl;
}