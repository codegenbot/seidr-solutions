using namespace std;

float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    vector<float> prices = {10.99f, 5.00f, 2.50f};
    vector<float> discounts = {20.0f, 15.0f, 25.0f};
    float result = shoppingList(prices, discounts);
    return 0;
}