<pre><code><cpp>
int shoppingList(float prices[], int nPrices, float discounts[]) {
    float total = 0;
    for (int i = 0; i < nPrices; i++) {
        float priceAfterDiscount = prices[i] - (prices[i] * discounts[i] / 100.0f);
        total += priceAfterDiscount;
    }
    return static_cast<int>(total * 100.0f + 0.5f);
}
</cpp></code></pre>