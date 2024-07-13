#include <vector>
using namespace std;

float shoppingList(float total_price, float *prices, int n_prices, 
                    float *discounts, int n_discounts) {
    for (int i = 0; i < n_discounts; i++) {
        prices[i] *= (1 - discounts[i]);
    }
    float sum = 0;
    for (int i = 0; i < n_prices; i++) {
        sum += prices[i];
    }
    return sum;
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
    
    float total_price = 0.0;
    for (int i = 0; i < n; i++) {
        total_price += shoppingList(total_price, &prices[i], 1, &discounts[i], 1);
    }
    
    cout << fixed << setprecision(1) << total_price << endl;
    
    return 0;
}