#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

float shoppingList(float price[], float discount[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += price[i] * (1 - discount[i] / 100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    float price[n];
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    float discount[n];
    for (int i = 0; i < n; i++) {
        cin >> discount[i];
    }

    cout << fixed << setprecision(1) << shoppingList(price, discount, n) << endl;

    return 0;
}