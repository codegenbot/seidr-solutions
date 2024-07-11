#include <vector>
using namespace std;

float shoppingList(float prices[], int n, float discounts[]) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
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
    
    float result = shoppingList(&prices[0], n, &discounts[0]);
    cout << fixed << setprecision(1) << result << endl;
    
    return 0;
}