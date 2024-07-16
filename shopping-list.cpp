float shoppingList(float prices[], int nPrices, float discounts[]) {
    float total = 0;
    for (int i = 0; i < nPrices; i++) {
        total += static_cast<float>(prices[i] * (1 - discounts[i]) * 100);
    }
    return total / 100.0f;
}