#include <vector>
using namespace std;

float shoppingTrip(float prices[], int n, float discounts[]) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100);
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
    
    vector<float> discounts(n);
    for (float &discount : discounts) {
        cin >> discount;
    }
    
    float result = shoppingTrip(&prices[0], n, &discounts[0]);
    
    cout << fixed << setprecision(1) << result << endl;
    
    return 0;
}