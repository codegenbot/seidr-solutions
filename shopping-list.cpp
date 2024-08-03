#include <vector>
using namespace std;

double shoppingList(int n, vector<float> prices, int m, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i]);
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
    int m;
    cin >> m;
    vector<float> discounts(m);
    for (float &discount : discounts) {
        cin >> discount;
    }
    double result = shoppingList(n, prices, m, discounts);
    printf("%.1f\n", result);
    return 0;
}