#include <iostream>
#include <vector>
using namespace std;

struct Item {
    float price;
    float discount;
};

int main() {
    int n;
    cin >> n;
    
    vector<Item> items(n);

    for (int i = 0; i < n; ++i) {
        cin >> items[i].price;
    }

    for (int i = 0; i < n; ++i) {
        cin >> items[i].discount;
    }

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        float discount_amount = items[i].price * (items[i].discount / 100.0f);
        total_price += items[i].price - discount_amount;
    }

    cout.precision(2);
    cout << fixed << total_price << "\n";

    return 0;
}