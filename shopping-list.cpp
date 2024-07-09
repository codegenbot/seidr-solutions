```cpp
int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    float price, discount;
    while (std::cin >> price >> discount) {
        prices.push_back(price);
        discounts.push_back(discount / 100.0); 
        char c = std::cin.peek();
        if(c == '\n') break; // we've reached the end of the file
    }

    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}