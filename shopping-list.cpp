int calculateTotalPrice(float prices[], int nPrices, float discounts[]) {
    int total = 0;
    for (int i = 0; i < nPrices; i++) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}