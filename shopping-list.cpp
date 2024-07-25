#include <vector>
using namespace std;

float shoppingList(float prices[], int n, float discount[]) {
    float total = 0.0;
    for (int i = 0; i < n; i++) {
        float price = prices[i];
        float disc = discount[i] / 100.0;
        float discounted_price = price - (price * disc);
        total += discounted_price;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n), discount(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i] >> discount[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discount[0]) << endl;
    return 0;
}