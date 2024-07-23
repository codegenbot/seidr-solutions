```c++
float shoppingList(vector<float> prices, int n, vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < n; ++i) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}