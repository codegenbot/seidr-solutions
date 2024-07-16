```cpp
#include <cmath>

int main() {
    float prices[] = {10.99f, 5.99f, 7.99f};
    int nPrices = sizeof(prices) / sizeof(prices[0]);
    float discounts[] = {20.0f, 15.0f, 30.0f};

    int shoppingList(float* prices, int nPrices, float* discounts) {
        float total = 0.0;
        for (int i = 0; i < nPrices; i++) {
            total += prices[i] * (1 - discounts[i]/100.0);
        }
        return static_cast<int>(std::round(total));
    }

    int result = shoppingList(prices, nPrices, discounts);

    std::cout << "Total price after discount: $" << result << std::endl;

    return 0;
}