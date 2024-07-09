```cpp
int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    float price, discount;
    while (std::cin >> price >> std::skipws >> std::cin.peek()) { 
        if (std::cin.peek() != '\n') { 
            prices.push_back(price);
            std::cin >> discount; // read the discount value
            discounts.push_back(discount / 100.0); 
        } else {
            break; 
        }
    }

    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}