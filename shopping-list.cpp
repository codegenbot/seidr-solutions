double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        if (discounts[i] > 100 || prices[i] < 0 || discounts[i] < 0) {
            cout << "Invalid input. Please enter a discount percentage between 0 and 100." << endl;
            return -1.0;
        }
        total += prices[i] - prices[i] * (discounts[i]/100.0);
    }
    return total;
}