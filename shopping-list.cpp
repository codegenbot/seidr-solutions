#include <vector>
using namespace std;

float shoppingList(float price[], float discount[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        float discountedPrice = price[i] * (1 - discount[i] / 100);
        total += discountedPrice;
    }
    return total;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> n;
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    #include <iomanip>
    std::cout << fixed << setprecision(1) << shoppingList(&prices[0], &discounts[0], n) << endl;
    return 0;
}