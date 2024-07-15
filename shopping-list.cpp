#include <vector>
#include <iostream>
using namespace std;

float shoppingList(float price[], int n, float discount[]) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += price[i] * (1 - discount[i]);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }
    vector<float> discounts(n);
    for (float &discount : discounts) {
        cin >> discount;
    }
    float total = shoppingList(&prices[0], n, &discounts[0]);
    cout << fixed << setprecision(1) << total << endl;
    return 0;
}