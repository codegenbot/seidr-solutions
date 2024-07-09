```cpp
double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        if(discounts[i] > 0.0) 
            total += price - (price * (discounts[i] / 100.0));
        else
            total += price;
    }
    return total;
}