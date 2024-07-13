#include <vector>
using namespace std;

float shoppingTrip(float price[], float discount[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        float priceItem = price[i];
        float percentDiscount = discount[i] / 100.0f;
        float discountedPrice = priceItem * (1 - percentDiscount);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n), discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    float result = shoppingTrip(&prices[0], &discounts[0], n);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}