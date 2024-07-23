float shoppingList(float price[], int n, float discount[]) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        float discountedPrice = price[i] - (price[i] * discount[i] / 100.0);
        total += discountedPrice;
    }
    return total;
}