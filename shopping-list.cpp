#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Read input from user
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    // Calculate total price after applying discounts
    double total = 0.0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i]);
    }

    // Print result
    cout << "Total price after applying discounts: " << total << endl;

    return 0;
}
