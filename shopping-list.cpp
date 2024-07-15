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
    float total = 0;
    for (int i = 0; i < n; i++) {
        prices[i] -= (prices[i] * discounts[i] / 100);
        total += prices[i];
    }
    std::cout << std::fixed << std::setprecision(6) << total << std::endl;
    return 0;
}