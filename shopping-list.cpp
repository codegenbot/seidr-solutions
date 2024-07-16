```cpp
int main() {
    float prices[] = {10.0f, 20.0f, 30.0f};
    int nPrices = sizeof(prices) / sizeof(prices[0]);
    float discounts[] = {0.1f, 0.2f, 0.3f};

    float total = shoppingList(prices, nPrices, discounts);

    return 0;
}

float shoppingList(float prices[], int nPrices, float discounts[]) {
    float total = 0;
    for (int i = 0; i < nPrices; i++) {
        total += static_cast<float>(prices[i] * (1 - discounts[i]) * 100);
    }
    return total / 100.0f;
}