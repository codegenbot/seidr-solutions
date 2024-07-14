#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0;
    
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
        double discountedPrice = price - discount;
        
        if (discountedPrice < 0) {
            discountedPrice = 0;
        }
        
        totalPrice += discountedPrice;
    }
    
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float &price : prices)
        cin >> price;
    cin >> n;
    vector<float> discounts(n);
    for (float &discount : discounts)
        cin >> discount;
    
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    
    return 0;
}