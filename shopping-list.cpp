```c++
double shoppingTrip(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        double discountedPrice = prices[i] * (1 - discounts[i] / 100.0);
        total += discountedPrice;
    }
    return total;
}