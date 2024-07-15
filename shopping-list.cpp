```cpp
int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    std::cin >> n;
    std::vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        std::cin >> discounts[i];
    }
    float total = 0.0;
    for (int i = 0; i < n; i++) {
        float originalPrice = prices[i];
        float discountPercentage = discounts[i];
        float priceAfterDiscount = originalPrice - (originalPrice * discountPercentage / 100);
        total += priceAfterDiscount;
    }
    std::cout << std::fixed << std::setprecision(6) << total << std::endl;
}