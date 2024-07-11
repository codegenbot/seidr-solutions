#include <vector>
using namespace std;

double shoppingTrip(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * discounts[i] / 100.0;
        totalPrice += price - discount;
    }
    return totalPrice;
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
    
    double result = shoppingTrip(prices, discounts);
    cout << fixed << setprecision(1) << result << endl;
    
    return 0;
}