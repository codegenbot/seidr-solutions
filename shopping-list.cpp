#include <vector>
using namespace std;

float shoppingList(float prices[], int n, float discounts[]) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i]/100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float &p : prices) {
        cin >> p;
    }
    cin >> n;
    vector<float> discounts(n);
    for (float &d : discounts) {
        cin >> d;
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0]) << endl;
    return 0;
}