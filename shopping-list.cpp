#include <vector>
using namespace std;

float calculateShoppingTrip(float price[], float discount[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        float originalPrice = price[i];
        float discountedPrice = originalPrice - (originalPrice * discount[i] / 100);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n), discounts(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    float total = calculateShoppingTrip(&prices[0], &discounts[0], n);

    cout << fixed;
    cout.precision(1);
    cout << total << endl;

    return 0;
}