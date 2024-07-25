#include <vector>
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
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    float result = shoppingList(&prices[0], n, &discounts[0]);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}