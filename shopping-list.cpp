```
float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for(int i=0; i<prices.size(); i++) {
        float discounted_price = prices[i] * (1 - discounts[i]/100);
        total += fixed << setprecision(2) <<  discounted_price;
    }
    return total;
}