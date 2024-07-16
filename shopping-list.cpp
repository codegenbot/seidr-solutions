```c++
int main() {
    vector<float> prices = {1.99f, 2.99f, 3.99f};
    vector<float> discounts = {5.0f, 10.0f, 15.0f};
    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;
}