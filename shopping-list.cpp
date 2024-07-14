int main() {
    int numItems;
    cin >> numItems;

    vector<float> prices(numItems);
    for (float &price : prices) {
        cin >> price;
    }

    int secondNumber;
    cin >> secondNumber;

    vector<float> discounts(secondNumber);
    for (float &discount : discounts) {
        cin >> discount;
    }

    cout << "Total cost: " << shoppingList(prices, discounts) << endl;
    return 0;
}