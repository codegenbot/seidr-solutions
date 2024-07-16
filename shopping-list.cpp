```cpp
int main() {
    float prices[] = {10.99f, 5.99f, 7.99f};
    int nPrices = sizeof(prices) / sizeof(prices[0]);
    float discounts[] = {20.0f, 15.0f, 30.0f};

    int result = shoppingList(prices, nPrices, discounts);

    std::cout << "Total price after discount: $" << result / 100.0f << std::endl;

    return 0;
}